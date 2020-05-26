#include <iostream>
class Rational
{
    int x;
    int y;
 public:
    Rational()
    {
        x=0; y=1;
    }
    Rational(int x1, int y1)
    {
        if(y1==0) return;
        x=x1; y=y1;
    }
    void set(unsigned x1, int y1)
    {
        if(y1==0) return;
        x=x1; y=y1;
    }
    Rational add(const Rational& z)
    {
        Rational v;
        int n=z.x*y+x*z.y;
        int d=z.y*y;
        return Rational(n,d);
    }
    Rational multiply(const Rational& z)
    {
        Rational v;
        int n=z.x*x;
        int d=z.y*y;
        return Rational(n,d);
    }
    void show()
    {
        std::cout<<x<<'/'<<y<<"\n";
    }
};

int main()
{
    Rational x(1,1), y(2,3), z, v;
    z=x.add(y); z.show();
    v=x.multiply(y); v.show();
}
