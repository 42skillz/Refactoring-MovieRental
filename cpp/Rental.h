//
// Created by bruno on 09/03/2021.
//

#ifndef CPP_RENTAL_H
#define CPP_RENTAL_H

#include "Movie.h"

class Rental {
private:
    Movie* movie_;
    int daysRented_;

public:
    Rental(Movie* movie, int days_rented);
    int get_days_rented() const;
    Movie* get_movie() const;
    ~Rental();
};


#endif //CPP_RENTAL_H
