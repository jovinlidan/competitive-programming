#include <bits/stdc++.h>
using namespace std;
int main() {
 int n, m, z, i, counts=0;
 
 cin >> n >> m >> z;
 
 for (i = n; i <= z; i+=n)
 {
  if (i % m == 0) {
   counts++;
  }
 }
 
 cout << counts << endl;
 
 
 return 0;
}