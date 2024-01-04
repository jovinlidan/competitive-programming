#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 long long int manyHouse, manyTask, listHouse, i ,j ,counts=0, currentHouse = 1, time=0, prevHouse=1;
 
 cin >> manyHouse >> manyTask;
 
 for (i = 0; i < manyTask; i++)
 {
  cin >> listHouse;
 
  if (listHouse - prevHouse < 0) {
   time += (listHouse - prevHouse) + manyHouse;
  }
  else {
   time += listHouse - prevHouse;
  }
  prevHouse = listHouse;
  
 }
 
 cout << time;
 
 
 
 
 
 
 return 0;
}