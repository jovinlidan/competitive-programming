#include <bits/stdc++.h>
 
 
using namespace std;
 
int main() {
 
 int n, i, j, vector3[3], countsX = 0, countsY = 0, countsZ=0;
 
 cin >> n;
 
 for (i = 0; i < n; i++)
 {
  cin >> vector3[0] >> vector3[1] >> vector3[2];
 
  countsX += vector3[0];
  countsY += vector3[1];
  countsZ += vector3[2];
 }
 
 if ((countsX == 0) && (countsY == 0) && (countsZ == 0))
  cout << "YES" << endl;
 else
  cout << "NO" << endl;
 
 
 
 
 
 
 return 0;
}