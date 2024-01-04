#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int n[5][5], i, j, distanceI,distanceJ;
 for (i = 0; i < 5; i++)
 {
  
  for (j = 0; j < 5; j++)
  {
   cin >> n[i][j];
  }
 }
 
 for (i = 0; i < 5; i++)
 {
  for (j = 0; j < 5; j++)
  {
   if (n[i][j] == 1) {
    distanceI = abs(i - 2);
    distanceJ = abs(j - 2);
   }
  }
 }
 
 cout << distanceI + distanceJ << endl;
 
 
 
 
 return 0;
}