#include <bits/stdc++.h>
using namespace std;
int main() {
 
 int n, bil[105] = {}, i, total=0;
 cin >> n;
 
 for (i = 0; i < n; i++)
 {
  cin >> bil[i];
  total += abs(bil[i]);
 }
 cout << total << endl;
 
 
 return 0;
}