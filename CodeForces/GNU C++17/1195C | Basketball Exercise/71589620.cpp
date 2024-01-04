#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli dp[100005][3] = {}, arr1[100005] = {}, arr2[100005] = {};
lli n;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 cin >> n;
 for(int i = 1; i <= n; i++)cin >> arr1[i];
 for(int i = 1; i <= n; i++)cin >> arr2[i];
 
 for(int i = 1; i <= n; i++)
 {
  dp[i][0] = max(dp[i-1][1] + arr1[i], max(dp[i-1][2] + arr1[i], arr1[i]));
  dp[i][1] = max(dp[i-1][0] + arr2[i], max(dp[i-1][2] + arr2[i], arr2[i]));
  dp[i][2] = max(dp[i-1][0], dp[i-1][1]);
 }
 cout << max(dp[n][0], dp[n][1]);
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}