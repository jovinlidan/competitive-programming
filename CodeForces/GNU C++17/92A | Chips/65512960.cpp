#include <bits/stdc++.h>
using namespace std;
int main() {
 int n, m, counts=1, total=0;
 cin >> n >> m;
 while (total < m) {
  total += counts;
 
  if (total >= m) {
   if (total != m) {
    total -= counts;
   }
   break;
  }
  counts++;
  if (counts > n) {
   counts = 1;
  }
  
 
 }
 cout << m - total << endl;
 
 
 return 0;
}