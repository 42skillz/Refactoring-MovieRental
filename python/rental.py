class Rental:
    def __init__(self, movie, days_rented):
        self.daysRented = days_rented
        self.movie = movie

    def get_days_rented(self):
        return self.daysRented

    def get_movie(self):
        return self.movie
