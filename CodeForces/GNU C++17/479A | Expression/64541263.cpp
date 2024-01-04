#include <bits/stdc++.h>
 
 
using namespace std;
 
int main() {
 
 int a, b, c, i, j, max = -1e9;
 cin >> a >> b >> c;
 
 if ((a + b * c) > max) {
  max = (a + b * c);
 }
  if ((a * (b + c)) > max) {
  max = (a * (b + c));
 }
  if ((a * b * c) > max) {
   max = (a * b * c);
 }
  if (((a + b) * c) > max) {
   max = ((a + b) * c);
 }
 if ((a + b + c) > max) {
  max = (a + b + c);
 }
 
 cout << max << endl;
 
 return 0;
}