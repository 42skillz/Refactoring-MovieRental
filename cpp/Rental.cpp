//
// Created by bruno on 09/03/2021.
//

#include "Rental.h"
#include "Movie.h"

Rental::Rental(Movie* movie, int days_rented) {
    this->movie_ = movie;
    this->daysRented_ = days_rented;
}

int Rental::get_days_rented() const
{
    return this->daysRented_;
}

Movie* Rental::get_movie() const
{
	return this->movie_;
}

Rental::~Rental()
{
	delete this->movie_;
}
