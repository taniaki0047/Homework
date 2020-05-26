//Створии список цілих чисел List. Чи не використовуючи допоміжних об'єктів і не змінюючи розміру списку, переставити елементи списку так, щоб числа йшли від найменшого до найбільшого
#include <iostream>
#include <string>
#include <list>
#include<iterator>
using namespace std;
int main(){
  list <int> spisok = {4, 6, 3, 5, 9, 0, -4};
  for(auto it1=spisok.begin();it1!=spisok.end();++it1){
    for(auto it2=it1;it2!=--spisok.end();it2){
      ++it2;
          if (*it1>*it2)
            swap(*it1,*it2);

    }
    }

  for (int i:spisok)
    cout<<i<<" ";

}
