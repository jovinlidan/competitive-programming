#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int n, i, counts=0;
 string magnet, prevMagnet="00";
 
 cin >> n;
 
 for ( i = 0; i < n; i++)
 {
  cin >> magnet;
  if (prevMagnet != magnet) {
   counts++;
  }
  prevMagnet = magnet;
 }
 
 cout << counts << endl;
 
 return 0;
}