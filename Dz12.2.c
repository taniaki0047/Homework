//вывести вчерашнюю дату
#include <stdio.h>
typedef struct DATE
{
 int d; int m; int y;
}DATE;
int inp(DATE *p); void out(const DATE *p); DATE yesterday(DATE *p);
int main()
{
 DATE k,l;
 inp(&k); out(&k);
 l=yesterday(&k); out(&l);
}
int inp(DATE *p)
{
 int d, m, y;
 int n=scanf("%d %d %d", &d, &m, &y);
 p->d=d; p->m=m; p->y=y;
 return n==3;
}
DATE yesterday(DATE *p)
{
  DATE f;
  int m[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int m1[]={5, 7, 10, 12};
  int m2[]={2, 4, 6, 9, 11};
  for(int i=0;i<4;i++)
  {
   if(p->m==m1[i]|p->d==1)
     {f.d=30; f.m=p->m-1; f.y=p->y;}
  }
  for(int i=0;i<5;i++)
  {
   if(p->d==1){f.d=31; f.m=p->m-1; f.y=p->y;}
  }
  for(int i=0;i<12;i++)
  {
   if(p->d<=31|p->d>=2)
   {f.d=p->d-1; f.m=p->m; f.y=p->y;}
  }
  if(p->d==1|p->m==8)
  {f.d=31; f.m=7; f.y=p->y;}
  if(p->d==1|p->m==3)
     {if(p->y%4==0){f.d=29;f.m=2;f.y=p->y;}
   else{f.d=28;f.m=2;f.y=p->y;}}
  if(p->d==1|p->m==1)
   {f.d=31;f.m=12;f.y=p->y-1;}
  return f;
}
void out(const DATE *p)
{
 printf("%d.%d.%d\n",p->d, p->m, p->y);
}

