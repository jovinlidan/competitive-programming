#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 
 
 int avaiableSocks, m, i, j, counts = 1, hasil = 0, day = 0;
 cin >> avaiableSocks >> m;
 
 while (avaiableSocks > 0) {
 
  avaiableSocks--;
  day++;
  if (day == (counts * m)) {
   avaiableSocks++;
   counts++;
   continue;
  }
  
  /*if (avaiableSocks < 0) {
   if (day == (counts * m)) {
    day++;
 
   }
   break;
  }*/
   
 
  
  
  
 }
 
 cout << day << endl;
 
 
 
 
 
 
 
 
}