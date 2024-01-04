#include <bits/stdc++.h>
using namespace std;
int main() {
 int n, i, j, counts = 0;
 char cross[505][505];
 
 cin >> n;
 
 for (i = 0; i < n; i++)
 {
  for (j = 0; j < n; j++)
  {
   cin >> cross[i][j];
  }
 }
 for (i = 1; i < n-1; i++)
 {
  for (j = 1; j < n-1; j++)
  {
   if (cross[i][j] == 'X' && cross[i - 1][j - 1] == 'X' && cross[i - 1][j + 1] == 'X' && cross[i + 1][j - 1] == 'X' && cross[i + 1][j + 1] == 'X') {
    counts++;
   }
  }
 }
 
 cout << counts << endl;
 
 return 0;
}