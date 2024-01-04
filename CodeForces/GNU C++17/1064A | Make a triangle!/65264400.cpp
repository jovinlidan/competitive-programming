#include <bits/stdc++.h>
using namespace std;
int main() {
 int a, b, c, time=0;
 cin >> a >> b >> c;
 
 
 if (a + b <= c) {
  time += c - (a + b) + 1;
 }
 else if (b + c <= a) {
  time += a - (c + b) + 1;
 }
 else if (a + c <= b) {
  time += b - (a + c) + 1;
 }
 
 cout << time << endl;
 
 
 
 
 return 0;
}