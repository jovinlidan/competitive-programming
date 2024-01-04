#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli n, erg[100005] = {},dp[100005][2] = {};
string arr[100005] = {}, rev[100005] = {};
 
 
int main()
{
 const lli MAXN = 1e18;
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)cin >> erg[i];
    for(int i = 1; i <= n; i++)
 {
  cin >> arr[i];
  string temp = arr[i];
  reverse(temp.begin(), temp.end());
  rev[i] = temp;
  dp[i][0] = MAXN;
  dp[i][1] = MAXN;
 }
 
 dp[1][0] = 0;
 dp[1][1] = erg[1];
 
 for(int i = 2; i <= n; i++)
 {
        if(arr[i-1] <= arr[i])
  {
   dp[i][0] = dp[i-1][0];
  }
  if(rev[i-1] <= arr[i])
  {
   dp[i][0] = min(dp[i][0], dp[i-1][1]);
  }
 
  if(rev[i-1] <= rev[i])
  {
   dp[i][1] = dp[i-1][1]+erg[i];
  }
 
  if(arr[i-1] <= rev[i])
  {
   dp[i][1] = min(dp[i-1][0] + erg[i] , dp[i][1]);
  }
 
 }
 lli hsl = min(dp[n][0], dp[n][1]);
 if(hsl == MAXN) cout << -1 << endl;
 else cout << hsl << endl;
 
 
 return 0;
}