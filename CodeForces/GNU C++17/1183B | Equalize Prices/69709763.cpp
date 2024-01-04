#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int tc;
 cin >> tc;
 while(tc--)
 {
  int n, k, mn = INT_MAX, mx = INT_MIN;
  int arr[105] = {};
  cin >> n >> k;
  for(int i = 0; i < n; i++)
  {
   cin >> arr[i];
   mx = max(mx, arr[i]);
   mn = min(mn, arr[i]);
  }
  if((mx - mn)/2.0 > k) cout << -1 << endl;
  else
  {
   cout << mn+k << endl;
 
  }
 }
 
 
 
 
 
 
 
 
 return 0;
}