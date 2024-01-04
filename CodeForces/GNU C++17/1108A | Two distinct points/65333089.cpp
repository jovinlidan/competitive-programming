#include <bits/stdc++.h>
using namespace std;
int main() {
 int q, l1, i,  r1, l2, r2;
 cin >> q;
 
 for (i = 0; i < q; i++)
 {
  cin >> l1 >> r1 >> l2 >> r2;
  if (l1 == r2) {
   r2 -= 1;
  }
  cout << l1 << " " << r2 << endl;
 }
 
 
 return 0;
}