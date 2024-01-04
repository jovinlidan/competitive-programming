#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int n, k, counts=0;
 cin >> n >> k;
 
 while (counts != k) {
 
  if (n % 10 == 0) {
   n /= 10;
   counts++;
  }
  else {
   n -= 1;
   counts++;
  }
 }
 
 cout << n << endl;
 
 
 
 
 return 0;
}