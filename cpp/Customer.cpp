//
// Created by bruno on 09/03/2021.
//

#include <sstream>
#include <string>
#include <iomanip>

#include "Customer.h"

Customer::Customer(const std::string name) {
	this->name_ = name;
}

std::string Customer::get_name() const {
    return this->name_;
}

void Customer::add_rental(Rental* rental) {
    this->rentals_.push_back(rental);
}

std::string Customer::statement() {
    double total_amount = 0;
    int frequent_renter_points = 0;
    std::stringstream result;
    result << "Rental Record for " << get_name() << "\n";

    for (Rental* rental : this->rentals_) {
        double this_amount = 0;

        //determine amounts for rental line
        switch (rental->get_movie()->get_price_code()) {
            case Movie::REGULAR:
                this_amount += 2;
                if (rental->get_days_rented() > 2)
                    this_amount += (rental->get_days_rented() - 2) * 1.5;
                break;
            case Movie::NEW_RELEASE:
                this_amount += rental->get_days_rented() * 3;
                break;
            case Movie::CHILDREN:
                this_amount += 1.5;
                if (rental->get_days_rented() > 3)
                    this_amount += (rental->get_days_rented() - 3) * 1.5;
                break;
            default: 
                ;
        }

        // add frequent renter points
        frequent_renter_points++;
        // add bonus for a two day new release rental
        if (rental->get_movie()->get_price_code() == Movie::NEW_RELEASE && rental->get_days_rented() > 1)
            frequent_renter_points++;

        // show figures for this rental
        result << "\t" << rental->get_movie()->get_title() << "\t" << std::fixed << std::setfill ('0') << std::setprecision(1) << this_amount << "\n";
        total_amount += this_amount;
    }

    // add footer lines
    result << "Amount owed is " << std::fixed << std::setfill ('0') << std::setprecision(1) << total_amount << "\n";
    result << "You earned "<< frequent_renter_points << " frequent renter points";

    return result.str();
}

Customer::~Customer()
{
	 for (Rental* rental : this->rentals_) {
		delete rental;
	 }
}