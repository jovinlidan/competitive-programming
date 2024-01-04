#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
lli dp[100005] = {};
lli fb(lli n)
{
 if(dp[n] != 0) return dp[n];
 if(n == 1|| n == 2)return 1;
 else return dp[n] =  fb(n-1) + fb(n-2);
}
 
int main()
{
 lli n;
 cin >> n;
 dp[1] = 1;
 dp[2] = 1;
 fb(50);
 
 if(n == 2)
 {
  cout << "1 1 0\n";
  return 0;
 }
 else if(n == 1 )
 {
  cout << "1 0 0\n";
  return 0;
 }
 else if(n == 0)
 {
  cout << "0 0 0\n";
  return 0;
 }
 
 for(int i = 0; i <= 50; i++)
 {
  if(n == dp[i])
  {
   cout << dp[i-1] << " " << dp[i-3] << " " << dp[i-4] << endl;
   return 0;
  }
 }
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}