#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n;cin >> n;
 int arr[n+5] = {}, dp[n+5] = {}, temp = 1;
 dp[1] = 1;
 dp[n+1] = 1;
 for(int i = 1; i <= n; i++)
 {
  cin >> arr[i];
  if(i > 1)
  {
   if(arr[i] > arr[i-1])temp++;
   else temp = 1;
   dp[i] = temp;
  }
 }
 int ans = 1;
 for(int i = 2; i <= n-1; i++)
 {
  if(dp[i] == 1 && dp[i-1] != 1 && dp[i+1] != 1)
  {
            if(arr[i+1] - arr[i-1] >= 2 || arr[i] - arr[i-2] >= 2)
   {
    //cout << "KENAK\n";
    int left = dp[i-1];
    for(int j = i+1; j <= n+1; j++)
    {
     if(dp[j] == 1)
     {
      //cout << "KENAK" << endl;
      ans = max(ans, left+dp[j-1]);
      i = j-1;
      break;
     }
 
    }
   }
  }
  ans = max(ans , dp[i]+1);
 }
 //cout << ans << endl;
 if(dp[n] < n)
 {
  ans = max(ans, dp[n]+1);
 }
 if(n == 2)ans = 2;
//    for(int i = 1; i <= n; i++)cout << dp[i] <<  " ";
// cout <<endl;
 cout << ans << endl;
 
 
 
 
 return 0;
}