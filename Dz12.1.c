//умножение и сложение двух дробей
#include <stdio.h>
typedef struct RATIONAL
 {
  int b; unsigned a;
 }R;
 int inp(R *p)
 {
  unsigned b; int a;
  int n=scanf("%d %u", &a, &b);
  p->a=a;p->b=b;
  return n==2;
 }
 void out(const R *p) //const показывет, что значение не меняется
 {
  printf("%d/%u\n",p->a, p->b);
 }
 R add(R x, R y) //сложение
 {
  R z;
  z.a=x.a*y.b+x.b*y.a; z.b=x.b*y.a;
  reduce(&z);
  return z;
 }
 R mult(R x, R y)//умножение
 { R z;
   z.a=x.a*y.a; z.b=x.b*y.b;
   reduce(&z);
   return z;
 }
 void comparison (R x, R y) //сравнение
 {
  unsigned a, b;
  a=x.a*y.b; b=y.a*x.b; //printf("a %u b %u\n", a, b);
  if(a>b)
  {printf("1 chislo bolshe");}
  if(a<b)
  {printf("2 chislo bolshe");}
  if(a==b)
  {printf("Chisla ravny");}
 }
 void reduce(R *x) //сокращение
 {
  while(x->a%x->b!=0)
  {
   int z=x->b;
   x->b=x->a%x->b;
   x->a=z;
  }
 }
 int main()
 {
  R x, y, z;
  inp(&x); out(&x);
  inp(&y); out(&y);
  z=add(x, y); out(&z); comparison(x,y);
 }

