#include <bits/stdc++.h>
using namespace std;
int main() {
 int n, m, i, seq[15], fq[15] = {}, temp;
 cin >> n >> m;
 
 for (i = 0; i < n; i++)
 {
  cin >> seq[i];
 }
 
 for (i = 0; i < m; i++)
 {
  cin >> temp;
  fq[temp]++;
 }
 
 for (i = 0; i < n; i++)
 {
  if (fq[seq[i]] != 0) {
   cout << seq[i];
   if (i != n - 1) {
    cout << " ";
   }
   
  }
 }
 cout << endl;
}