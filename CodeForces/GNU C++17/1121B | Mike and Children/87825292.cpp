#include <bits/stdc++.h>
using namespace std;
#define lli long long int
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int n, cnt = -1e9;
 cin >> n;
 unordered_map<int ,int> vis;
 
 int arr[n+2] = {};
 for(int i = 0; i < n; i++)cin >> arr[i];
 
 for(int i = 0; i < n; i++)
 {
  for(int j = i+1; j < n; j++)
  {
   if(i == j) continue;
   int x = ++vis[arr[i]+arr[j]];
  // cout << x << " " << arr[i] << "-" << arr[j] << '\n';
   cnt = max(cnt, x);
 
  }
 }
 cout << cnt << '\n';
 
 
 
 
 
}
 