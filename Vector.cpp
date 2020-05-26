//реализация вектора на базе шаблона вектор с н координат, модуль вектор, сумма и скалярное произведение
#include <iostream>
#include <vector>
using namespace std;
void show(const vector<double> & v)
{
 vector<double>::const_iterator it;
 cout<<"<";
 for(it=v.begin();it!=v.end();++it)
 {
  cout<<*it<<",";
 }
 cout<<">";
}
void input(vector<double> & v1)
{
 int n;
 cout<<"n=";
 cin>>n;
 double d;
 for(int i=0;i<n;++i)
 {
  cin>>d; v1.push_back(d);
 }
 //show(v1);
}
vector<double> add(const vector<double> & v1, const vector<double> &v2)
{
 int m;
 if(v1.size()!=v2.size())
 {
  cout<<"Error";
 }
 m=min(v1.size(), v2.size());
 vector<double> res(m);
 for(int i=0;i<m;++i)
 {
  res[i]= v1[i]+v2[i];
 }
 return res;
}
double scalar(const vector<double> & v1, const vector<double> &v2)
{
 int m;
 if(v1.size()!=v2.size())
 {
  cout<<"Error";
 }
 m=min(v1.size(), v2.size());
 double res=0;
 for(int i=0;i<m;++i)
 {
  res+= v1[i]*v2[i];
 }
 return res;
}

int main(){
 vector<double> v1, v2;
 input(v1);
 input(v2);
 show(v1);
 vector<double> v3;
 v3=add(v1, v2);
 show(v3);
 double c=scalar(v1, v2);
 cout<<c<<endl;
}
