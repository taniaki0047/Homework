//считает наибольшое количество одинаковых символов, которые идут подряд и выводит это кол-во повторений
#include <iostream>
#include <string>
using namespace std;
int main(){
  string s,s1;
  cin>>s;
  char c=s[0],q;
  int m=0,j=1;
  for(int i=1;i<s.size();i++){
    if (s[i-1]==s[i])
    j=j+1;
  else
    {
      c=s[i-1];
      if (j>m)
        {
          q=s[i-1];
          m=j;
        }
      j=1;
          }}
if (j>m)
{  m=j;
  q=s[s.size()-1];
}
  cout<<m<<" "<<q;
}
