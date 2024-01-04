#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 
 int a, b, counts = 0;
 cin >> a >> b;
 while (a <= b) {
  a *= 3;
  b *= 2;
 
  counts++;
 
 
 }
 cout << counts << endl;
 
 
 
 
 
 return 0;
}