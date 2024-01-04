#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
 int n, matrix[105][105], i ,j, total=0, stengah=0;
 cin >> n;
 stengah = (n /2) + 1;
 for (i = 1; i <= n; i++)
 {
  for (j = 1; j <= n; j++)
  {
   cin >> matrix[i][j];
   if (i == j) {
    //cout << i << j << "FIRST" << endl;
    total += matrix[i][j];
   }
   else if (i + j == n+1) {
    //cout << i << j << "SEC" << endl;
    total += matrix[i][j];
   }
   else if (i == stengah || j == stengah) {
    //cout << i << j << "THIRD" << endl;
    total += matrix[i][j];
   }
  }
 }
 cout << total << endl;
}