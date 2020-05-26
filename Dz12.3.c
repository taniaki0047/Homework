//структура полином, сложение, вычисление значения в данной точке, ввод и вывод
#include <stdio.h>
#define N 100
typedef struct POLYNOM
{
 int d; double c;
}P;
int inp(P a[N]);
void out(P a[N], int e);
int add( P a[N], P b[N], int t1, int t2, P c[N]);
double tochka(P a[N], int t1, double x);
int main()
{
 P p1[N], p2[N], p3[N];
 int t1, t2, t3;
 double x, z;
 printf("Vvedite znachenie tochki ");
 scanf("%lf", &x);
 t1=inp(p1); t2=inp(p2);
 t3=add(p1,p2,t1,t2,p3);
 out(p3, t3-1);
 z=tochka(p1, t1, x);
 printf("Znachenie mnogochlena v tochke x = %lf\n", z);
}
int inp(P a[N])
{
 int e;
 printf("Vvedite stepen ");
 scanf("%d", &e);
 printf("Vvedite coeficient nachinaya s 0 stepenya\n");
 for(int i=0;i<=e;i++)
 {
  printf("Coeficient ");
  scanf("%lf", &a[i].c);
  a[i].d=i;
 }
 return e;
}
void out(P a[N], int e)
{
 for(int k=0;k<e;k++)
 {
  printf("%lf(x^%d)+", a[k].c, a[k].d);
 }
 printf("%lf(x^%d)", a[e].c, a[e].d);
}
int add( P a[N], P b[N], int t1, int t2, P c[N])
{
 int i=0, j=0, k=0;
 while(i<t1+1 && j<t2+1)
 {
  if(a[i].d==b[i].d)
  {
   c[k].c=a[i].c+b[i].c;
   c[k].d=a[i].d;
   i++; j++; k++;
  }
  else if(a[i].d>b[j].d)
  {
   c[k].c=a[i].c;
   c[k].d=a[i].d;
   i++; k++;
  }
  else
  {
   c[k].c=b[i].c;
   c[k].d=b[j].d;
   k++; j++;
  }
 }
 while(i<t1+1)
 {
  c[k].c=a[i].c;
  c[k].d=a[i].d;
  i++; k++;
 }
 while(j<t2+1)
 {
  c[k].c=b[j].c;
  c[k].d=b[j].d;
  k++; j++;
 }
 return k;
}
double tochka(P a[N], int t1, double x)
{
 double k=a[0].c;
 for(int i=1;i<=t1;i++)
 {
  k+=x*a[i].c;
 }
 return k;
}
