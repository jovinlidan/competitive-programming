#include <bits/stdc++.h>
using namespace std;
int main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int n, i, j, rowS[105] = {}, colS[105] = {}, ansRow = 0, ansCol = 0;
 char cake[105][105];
 cin >> n;
 
 for (i = 1; i <= n; i++)
 {
  for (j = 1; j <= n; j++)
  {
   cin >> cake[i][j];
   if (cake[i][j] == 'C') {
    rowS[i]++;
    colS[j]++;
    ansRow+= rowS[i] - 1;
    ansCol+= colS[j] - 1;
    
   }
   
 
  }
 }
 
 cout << abs(ansCol + ansRow) << endl;
 
 
 
}