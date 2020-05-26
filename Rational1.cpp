#include <iostream>
using namespace std;
class Rational
{
public:
 unsigned nominator;
 int denominator;
 void input()
 {std:: cout<<"Nominator "<<'\n'; std:: cin>>nominator;
 std:: cout<<"Denominator "<<'\n'; std:: cin>>denominator;}
 void output()
 {std:: cout<<nominator<<"/"<<denominator<<'\n';}
 void sum(Rational a, Rational b)
 {Rational f;
 f.nominator=a.nominator*b.denominator+b.nominator*a.denominator; f.denominator=a.denominator*b.denominator;
 std :: cout<<"Sum "<<f.nominator<<'/'<<f.denominator<<'\n';}
 void multiply(Rational a, Rational b)
 {Rational f;
 f.nominator=(a.nominator*b.nominator);f.denominator=(a.denominator*b.denominator);
 std::cout<<"Multiply "<<f.nominator<<'/'<<f.denominator<<'\n';}
};
int main()
{
 Rational a,b,c,d;
 a.input();
 a.output();
 b.input();
 b.output();
 c.sum(a,b); d.multiply(a,b);
}
