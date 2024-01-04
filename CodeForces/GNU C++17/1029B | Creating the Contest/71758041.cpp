#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
lli dp[200005] = {}, n, arr[200005] = {};
lli solve(lli length, lli idx)
{
 cout << length<< endl;
 if(dp[idx] != 0) return dp[idx];
    if(idx == n) return length;
    if(arr[idx] * 2 >= arr[idx+1])
 {
  length = max(solve(length+1, idx+1), max (length, solve(1, idx+1)));
 }
 else
 {
  length = max(length , solve(1,idx+1));
 }
 return dp[idx] = length;
 
}
 
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 cin >> n;
 for(int i = 1; i <= n; i++) cin >> arr[i];
 
 lli mx = -1e9, cnt = 0;
 
 for(int i = 1; i <= n; i++)
 {
  if(arr[i-1]*2 < arr[i] && i != 1)
  {
   mx = max(cnt, mx);
   cnt = 0;
   //cout << i << endl;
  }
  cnt++;
 
 }
 mx = max(cnt, mx);
 cout << mx << endl;
 
 
 
 
 
 
 
 
 
 
 return 0;
}