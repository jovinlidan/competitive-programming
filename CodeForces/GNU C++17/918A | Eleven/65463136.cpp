#include <bits/stdc++.h>
using namespace std;
 
 
bool fibo(int x) {
 int d1 = 1;
 int d2 = 1;
 int temp = 0;
 for (int i = 0; i < x; i++)
 {
  //cout << d1 << " ";
  if (d1 == x) {
   return true;
  }
  else if (d1 > x) {
   return false;
  }
 
  temp = d1 + d2;
  d2 = d1;
  d1 = temp;
  
  
 }
}
 
int main() {
 
 int n, i;
 cin >> n;
 for (i = 1; i <= n; i++)
 {
  if (fibo(i)) {
   cout << "O";
  }
  else {
   cout << "o";
  }
 }
 
 
 
 return 0;
}