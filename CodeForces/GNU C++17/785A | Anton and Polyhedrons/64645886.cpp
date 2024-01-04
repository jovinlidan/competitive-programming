#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int n, i, hasil=0;
 cin >> n;
 string geometrics;
 for (i = 0; i < n; i++)
 {
  cin >> geometrics;
  if (geometrics == "Tetrahedron") hasil += 4;
  else if (geometrics == "Cube") hasil += 6;
  else if (geometrics == "Octahedron") hasil += 8;
  else if (geometrics == "Dodecahedron") hasil += 12;
  else if (geometrics == "Icosahedron") hasil += 20;
 
 }
 
 cout << hasil << endl;
 
 
 
 
 
 
 
 
 
 
 return 0;
}