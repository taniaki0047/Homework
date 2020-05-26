//замінити всі пари однакових символів, що йдуть підряд, на один символ
#include <iostream>
#include <string>
using namespace std;
int main(){
  string s,s1;
  cin>>s;
  s1=s[0];
  int c=1;
  for(int i=1;i<s.size();i++)
  {
    if (c==1 and s[i-1]==s[i]){
      c=0;
    }
    else
    {
      c=1;
      s1=s1+s[i];

  }
}


  cout<<s1;
}
