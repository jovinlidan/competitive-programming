#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli n, l, r, x, ans = 0, arr[20] = {};
void solve(lli mn, lli mx, lli total, lli idx)
{
 if(idx > n)return;
 lli mnAsli = mn, mxAsli = mx, tAsli = total;
 mn = min(mn, arr[idx]);
 mx = max(mx, arr[idx]);
 total += arr[idx];
 if(total >= l && total <= r && abs(mn-mx) >= x)
 {
  ans++;
 }
 
 solve(mn, mx, total, idx+1);
 solve(mnAsli, mxAsli, tAsli, idx+1);
 
 
 
 
}
 
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 cin >> n >> l >> r >> x;
 
 for(int i = 1; i <= n; i++)cin >> arr[i];
 //sort(arr+1, arr+n+1);
 solve(1e9, -1e9, 0, 1);
 
 cout << ans << endl;
 
 
 
 
 return 0;
}