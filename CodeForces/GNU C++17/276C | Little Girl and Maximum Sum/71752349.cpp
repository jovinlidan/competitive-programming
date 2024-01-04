#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli n, q, arr[200005] = {}, lefts[200005] = {}, rights[200005] = {};
vector<lli> dp;
 
bool cmp(lli x, lli y)
{
 return x > y;
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 cin >> n >> q;
 for(lli i = 0; i < n; i++) cin >> arr[i];
 
 sort(arr, arr+n, greater<lli>());
 lli l, r;
    for(lli i = 0; i < q; i++)
 {
  cin >> l >> r;
  lefts[l]++;
  rights[r]++;
 }
 
    lli total = 0;
    for(lli i = 1; i <= 200000; i++)
 {
  total += lefts[i];
  total -= rights[i-1];
  dp.push_back(total);
 }
 lli ans = 0;
 
    sort(dp.begin(), dp.end(), cmp);
 
    for(lli i = 0; i < dp.size(); i++)
 {
  if(dp[i] == 0)break;
  ans += (dp[i] * arr[i]);
 }
 cout << ans << endl;
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}