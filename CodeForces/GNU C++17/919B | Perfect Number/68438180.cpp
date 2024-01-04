#include <bits/stdc++.h>
using namespace std;
 
int dp[10005] = {};
 
bool isTen(int k)
{
 int sum = 0;
 for (int x = k; x > 0; x = x / 10) sum = sum + x % 10;
 if(sum == 10) return true;
 return false;
}
void solve()
{
 dp[1] = 19;
 for(int i = 2; i <= 10000; i++)
 {
  int ans = dp[i-1]+9;
  while(!isTen(ans))
  {
   ans += 9;
 
  }
 
  dp[i] = ans;
 
 }
 
}
 
int main()
{
 
 int s;
 cin >> s;
 solve();
 
 cout << dp[s] << endl;
 
 
 
 
 return 0;
 
}