#ifndef CPP_MOVIE_H
#define CPP_MOVIE_H

#include <string>

class Movie {
public:
    static const int CHILDREN = 2;
    static const int NEW_RELEASE = 1;
    static const int REGULAR = 0;
private:
    std::string title_;
    int price_code_;
public:
    Movie(const std::string& title, int price_code);
    auto get_price_code() const -> int;
    void set_price_code(int price_code);
    std::string get_title() const;
};

#endif //CPP_MOVIE_H
