#include <bits/stdc++.h>
using namespace std;
int main() {
 int x, i, j, idx1=0, idx2=0;
 bool able = false;
 cin >> x;
 for (i = 1; i <= x; i++)
 {
  for (j = 1; j <= x; j++)
  {
   if (i / j < x && i * j > x && i % j ==0 ) {
    idx1 = i;
    idx2 = j;
    able = true;
    break;
   }
  }
  if (able)break;
 }
 if (able) {
  cout << idx1 << " " << idx2 << endl;
 }
 else
  cout << -1 << endl;
 
 
 return 0;
}