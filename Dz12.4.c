/*¬изначити типи запису дл€ зображенн€ таких пон€ть адреса (мiсто, вулиц€, будинок, квартира)*/
#include <stdio.h>
typedef struct ADRESS
{
 char *city; char *street; char *house; int apartment;
}ADRESS;
int input(ADRESS p)
{
 char *c, *s, *h; int a;
    printf("Vvedite adres ");
 int n=scanf("%s %s %s %d", &c, &s, &h, &a);
 p.city=c; p.apartment=a; p.house=h; p.street=s;
 return n==4;
}
void output(const ADRESS p)
{
 printf("%s %s %s %d\n", p.city, p.street, p.house, p.apartment);
}
int main()
{
 ADRESS my;
 input(my); output(my);
}
