namespace RentalMovies
{
    public class Movie
    {       
        public const int Regular = 0;
        public const int NewRelease = 1;
        public const int Children = 2;

        private readonly string _title;

        public Movie(string title, int priceCode)
        {
            _title = title;
            PriceCode = priceCode;
        }

        public int PriceCode { get; set; }

        public string Title
        {
            get { return _title; }
        }
    }
}