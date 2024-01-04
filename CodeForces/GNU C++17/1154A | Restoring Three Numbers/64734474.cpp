#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int num1, num2, num3, num4, hasil, h1, h2, h3, maxs;
 cin >> num1 >> num2 >> num3 >> num4;
 
 maxs = max(num1, max(num2, max(num3, num4)));
 
 if (maxs == num1) {
  h1 = num1 - num2;
  h2 = num1 - num3;
  h3 = num1 - num4;
 }
 else if (maxs == num2) {
  h1 = num2 - num1;
  h2 = num2 - num3;
  h3 = num2 - num4;
 }
 else if (maxs == num3) {
  h1 = num3 - num1;
  h2 = num3 - num2;
  h3 = num3 - num4;
 }
 else {
  h1 = num4 - num2;
  h2 = num4 - num3;
  h3 = num4 - num1;
 }
 
 cout << h1 << " " << h2 << " " << h3 << endl;
 
 
 
 
 
 
 
 
 return 0;
}