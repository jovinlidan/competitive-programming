#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 int n, i, counts = 4, hasil = 0, bilGanti, kom1 = 0, kom2 = 0;
 cin >> n;
 
 bool run = true;
 while (run) {
  bilGanti = n - counts;
 
  if (bilGanti < 0) {
   run = false;
  }
  for (i = 2; i < bilGanti; i++)
  {
   if (bilGanti % i == 0) {
    kom1 = bilGanti;
    break;
   }
  }
  for (i = 2; i < counts; i++)
  {
   if (counts % i == 0) {
    kom2 = counts;
    break;
   }
  }
 
  if ((kom1 != 0) && (kom2 != 0)) {
   run = false;
  }
  else {
   kom1 = 0;
   kom2 = 0;
  }
  counts++;
 }
 
 cout << kom1 << " " << kom2 << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}