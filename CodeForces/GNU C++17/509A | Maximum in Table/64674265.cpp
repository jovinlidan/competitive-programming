#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 
 int n, max, i, j;
 int hasil[11][11];
 cin >> n;
 for (i = 1; i <= n; i++)
 {
  for (j = 1; j <= n; j++)
  {
   if ((i == 1) || (j == 1)) {
    hasil[i][j] = 1;
   }
   else {
    hasil[i][j] = hasil[i - 1][j] + hasil[i][j - 1];
   }
 
   if ((i == n) && (j == n)) {
    cout << hasil[i][j] << endl;
    break;
   }
  }
 }
 
 
 
 
 
 
 
 
 
 return 0;
}