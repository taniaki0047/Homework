//в строке А заменивть все ! на ., . - ..., * на +
#include <iostream>
#include <string>
using namespace std;
int main(){
  string s,s1;
  cin>>s;
  s1="";
  for(int i=0;i<=s.size();i=i+1){
    if (s[i]=='!')
      s1=s1+".";
    else if (s[i]=='.')
      s1=s1+"...";
    else if (s[i]=='*')
      s1=s1+"+";
    else
      s1=s1+s[i];
  }
  cout<<s1;
}
