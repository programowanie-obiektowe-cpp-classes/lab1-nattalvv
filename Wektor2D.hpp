class Wektor2D
{
    private:
            double x;
            double y;

    public:
        Wektor2D() { x=0.;  y=0.;}

        Wektor2D(double wspX, double wspY) { 
            x=wspX; 
            y=wspY; 
            }

            void setX(double wspX) { x=wspX; }

            double getX() { return x; }

            void setY(double wspY) { y=wspY; }

            double getY() { return y; }

            Wektor2D operator+(Wektor2D other){

                Wektor2D v{this->getX()+other.getX(), this->getY()+other.getY() };
                return v;

            }

            double operator*(Wektor2D other){

            double result = x*other.getX()+y*other.getY();
            return result;

            }

};


