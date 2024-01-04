#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 
 int n, i;
 string kata;
 int one=0, zero=0;
 
 cin >> n >> kata;
 for (i = 0; i < n; i++)
 {
  if (kata[i] == '1') {
   one++;
  }
  else
   zero++;
 }
 
 if (one > zero) {
  one -= zero;
  cout << one << endl;
 }
 else if (zero > one) {
  zero -= one;
  cout << zero << endl;
 }
 else
  cout << 0 << endl; 
 
 
 
 
 
 
 
 
 return 0;
}