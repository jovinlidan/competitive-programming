#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int tc;
 cin >> tc;
 while(tc--)
 {
  lli n, k, ans = 0, cnt =1;
  cin >> n >> k;
  lli arr[n+5] = {};
  for(int i = 0; i < n; i++)cin >> arr[i];
 
  sort(arr, arr+n, greater<int>());
 
  for(int i = 0; i < n; i++)
  {
   if(cnt * arr[i] >= k)
   {
    ans++;
    cnt = 0;
   }
   cnt++;
 
  }
  cout << ans << '\n';
 
 }
 
 
 
 
 
}