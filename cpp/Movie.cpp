#include "Movie.h"


Movie::Movie(const std::string& title, int price_code) {
    this->title_ = title;
    this->price_code_ = price_code;
}

int Movie::get_price_code() const
{
    return this->price_code_;
}

std::string Movie::get_title() const
{
    return this->title_;
}

void Movie::set_price_code(int price_code) {
    this->price_code_ = price_code;
}