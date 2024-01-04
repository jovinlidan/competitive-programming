#include <bits/stdc++.h>
using namespace std;
int main() {
 
 int n, k, q, i, j;
 cin >> q;
 for (i = 0; i < q; i++)
 {
  cin >> n >> k;
  for (j = 1; j <= n; j++)
  {
   cout << char(j % k + 97);
  }
  cout << endl;
 }
 
 
 
 return 0;
}