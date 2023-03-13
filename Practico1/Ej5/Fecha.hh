class Fecha{
    private:
        int day, month, year;
    public:
        Fecha(int=1, int=1, int=0);
        int getDay();
        int getMonth();
        int getYear();
        void setDay(int);
        void setMonth(int);
        void setYear(int);
        Fecha operator+(int);
        Fecha operator-(int);
        int operator-(Fecha);
        bool operator=(Fecha);
};