#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int d2, d3, d5, d6, total = 0;
 cin >> d2 >> d3 >> d5 >> d6;
 
 int digitMin256 = min(d2, min(d5, d6));
 total += (digitMin256 * 256);
 
 d2 -= digitMin256;
 if (d2 > 0) {
  int digitMin32 = min(d2, d3);
  total += (digitMin32 * 32);
 }
 
 
 cout << total << endl;
 
 
 
 
 
 
 
 return 0;
}