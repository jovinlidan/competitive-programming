#include <bits/stdc++.h>
using namespace std;
int main() {
 int n, i, lastOne=0, lastZero=0, temp = 0;
 cin >> n;
 
 for (i = 1; i <= n; i++)
 {
  cin >> temp;
  if (temp == 1) {
   lastOne = i;
  }
  else if (temp == 0) {
   lastZero = i;
  }
 }
 cout << min(lastOne, lastZero) << endl;
 
 
 
 return 0;
}