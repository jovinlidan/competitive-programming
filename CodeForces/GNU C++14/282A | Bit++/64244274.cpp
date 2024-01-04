#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int x, n, i;
 string statement;
 
 cin >> n;
 
 x = 0;
 for (i = 0; i < n; i++)
 {
  cin >> statement;
  if ((statement == "X++") || (statement == "++X")) {
   x++;
  }
  if ((statement == "X--") || (statement == "--X")) {
   x--;
  }
 }
 
 cout << x << endl;
 
 
 return 0;
}