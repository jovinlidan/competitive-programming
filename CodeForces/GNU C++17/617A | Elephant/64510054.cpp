#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 int x, counts = 0;
 cin >> x;
 
 while (x > 0) {
 
  if(x >= 5){
   x -= 5;
   counts++;
  }
  else if (x >= 4) {
   x -= 4;
   counts++;
  }
  else if (x >= 3) {
   x -= 3;
   counts++;
  }
  else if (x >= 2) {
   x -= 2;
   counts++;
  }
  else if (x >= 1) {
   x -= 1;
   counts++;
  }
 
 
  
 
 
 }
 
 cout << counts << endl;
 
 
 
 return 0;
}