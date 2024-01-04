#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli arr[300005] = {}, dp[300005] = {};
 
void solve(lli n)
{
    lli total = 0;
    for(int i = 0; i < n; i++)
 {
  total += arr[i];
  dp[i] = total;
 }
 
}
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 lli n, total = 0, last;
 cin >> n;
 last = n;
 for(lli i = 1; i <= n; i++)
 {
  cin >> arr[i];
  total += arr[i];
 }
 sort(arr, arr+n+1, greater<lli>());
 solve(n);
// for(int i = 0; i <= n+5; i++) cout << arr[i] << "_";
// cout << endl;
 while(last != 1)
 {
 
  total += dp[last-1];
   //cout << arr[i] << "-";
 
  //cout << endl;
  last--;
 }
 cout << total << endl;
 return 0;
}