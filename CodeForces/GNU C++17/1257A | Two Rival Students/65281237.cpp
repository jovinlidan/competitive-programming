#include <bits/stdc++.h>
using namespace std;
int main() {
 int i,nTestcase, n, x, a, b;
 cin >> nTestcase;
 for (i = 0; i < nTestcase; i++)
 {
  cin >> n >> x >> a >> b;
  if (a > b) {
   while (x != 0) {
    if (a != n) {
     a++;
    }
    else if (b != 1) {
     b--;
    }
    x--;
   }
  }
  else if (b > a) {
   while (x != 0) {
    if (b != n) {
     b++;
    }
    else if (a != 1) {
     a--;
    }
    x--;
   }
  }
  cout << abs(a - b) << endl;
 }
 return 0;
}