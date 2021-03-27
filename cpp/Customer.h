//
// Created by bruno on 09/03/2021.
//

#ifndef CPP_CUSTOMER_H
#define CPP_CUSTOMER_H

#include "Rental.h"
#include "vector"
#include "string"

class Customer {
private:
    std::string name_;
    std::vector<Rental*> rentals_ = std::vector<Rental*>();

public:
    explicit Customer(std::string name);
    void add_rental(Rental* rental);
    void compute_amout(Rental* rental);
    std::string get_name() const;
    std::string statement();
    ~Customer();
};


#endif //CPP_CUSTOMER_H
