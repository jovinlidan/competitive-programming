#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int bacteria, i, counts = 1, patokan, hasil = 1;
 cin >> bacteria;
 
 while (bacteria != 1) {
  if (bacteria % 2 == 0) {
   bacteria /= 2;
  }
  else {
   if (bacteria > 2) {
    bacteria -= 1;
    hasil++;
   }
   else {
    hasil += bacteria;
   }
   
  }
 }
 
 cout << hasil << endl;
 
 
 
 
 
 
 
 
 
 
}