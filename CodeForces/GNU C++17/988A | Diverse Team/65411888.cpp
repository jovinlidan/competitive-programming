#include <bits/stdc++.h>
using namespace std;
int main() {
 int i, counted[105] = {}, n, k, idxCount = 0, idxIn[105] = {}, temp, j;
 
 cin >> n >> k;
 for (i = 1; i <= n; i++)
 {
  cin >> temp;
  if (counted[temp] == 0) {
   counted[temp]++;
   idxIn[idxCount] = i;
   idxCount++;
  }
 }
 
 if (idxCount > k - 1) {
  cout << "YES\n";
  for (i = 0; i < k; i++)
  {
   cout << idxIn[i];
   if (i != k - 1) {
    cout << " ";
   }
  }
  cout << endl;
 }
 else {
  cout << "NO\n";
 }
 
 return 0;
}