#include <bits/stdc++.h>
#define lli long long int
#define pb(x) push_back(x)
lli n, arr[105] = {}, dp[115] ={}, mnRest = INT_MAX;
 
using namespace std;
 
lli solve(lli i, lli prevAc, lli rest)
{
 if(dp[i] != 0) return dp[i];
 if(i == n)
 {
  mnRest = min(mnRest, rest);
  return 0;
 }
 if(arr[i] == 0)
 {
  return dp[i] = solve(i+1, 0, rest+1); // REST
 }
 else if(arr[i] == 1)
 {
  if(prevAc != 1)
  {
   return dp[i] = solve(i+1, 1, rest);
  }
  else
  {
   return dp[i] = solve(i+1, 0, rest+1); // REST
  }
 }
 else if(arr[i] == 2)
 {
  if(prevAc != 2)
  {
   return dp[i] = solve(i+1, 2, rest);
  }
  else
  {
   return dp[i] = solve(i+1, 0, rest+1); //REST
  }
 }
 else if(arr[i] == 3)
 {
  if(prevAc == 1)
  {
   return dp[i] = solve(i+1, 2, rest);
  }
  else if(prevAc == 2)
  {
   return dp[i] = solve(i+1, 1, rest);
  }
  else
  {
   if(i != n-1)
   {
    if(arr[i+1] == 1) return solve(i+1, 2, rest);
    else if(arr[i+1] == 2) return solve(i+1, 1, rest);
    else if(arr[i+1] == 3 || arr[i+1] == 0) return solve(i+1, 0, rest);
 
   }
   if(dp[i] != 0) return dp[i];
   else return dp[i] = min(solve(i+1, 1, rest), solve(i+1, 2, rest));
  }
 
 }
 
 
}
 
 
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 cin >> n;
 for(int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 solve(0, 0, 0);
 cout << mnRest << endl;
 
 
 
 
 return 0;
}