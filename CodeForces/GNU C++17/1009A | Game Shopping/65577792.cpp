#include <bits/stdc++.h>
using namespace std;
int main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int i, j, n, m, counts = 0, cost[1005], wallet[1005], ans=0;
 cin >> n >> m;
 
 for (i = 0; i < n; i++)
 {
  cin >> cost[i];
 }
 
 for (i = 0; i < m; i++)
 {
  cin >> wallet[i];
 }
 
 for (i = 0; i < n; i++)
 {
  if (cost[i] <= wallet[counts]) {
   ans++;
   counts++;
  }
 }
 cout << ans << endl;
 
}