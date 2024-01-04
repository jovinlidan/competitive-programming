#include <bits/stdc++.h>
using namespace std;
int main() {
 int nButt, mBulb, j, i, counts[105] = {}, x, temp;
 cin >> nButt >> mBulb;
 bool able = true;
 
 for (i = 0; i < nButt; i++)
 {
  cin >> x;
  for (j = 0; j < x; j++)
  {
   cin >> temp;
   counts[temp]++;
  }
 }
 
 for (i = 1; i <= mBulb; i++)
 {
  if (counts[i] == 0) {
   able = false;
  }
 }
 if (able) cout << "YES\n";
 else cout << "NO\n";
 
 
 
 return 0;
}