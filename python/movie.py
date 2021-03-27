class Movie:
    CHILDREN = 2
    NEW_RELEASE = 1
    REGULAR = 0

    def __init__(self, title, price_code):
        self.title = title
        self.price_code = price_code

    def get_price_code(self):
        return self.price_code

    def set_price_code(self, arg):
        self.price_code = arg

    def get_title(self):
        return self.title

