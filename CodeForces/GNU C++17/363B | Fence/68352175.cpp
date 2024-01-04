#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 lli dp[200005]={};
 lli mn=INT_MAX, idx=-1, total=0, n, k, i,temp;
 cin >> n>> k;
 for( i = 1; i <= n; i++)
 {
  cin >> temp;
  total+= temp;
  dp[i] = total;
  //cout << total << endl;
 }
 for( i = 0; i <= n-k; i++)
 {
  if(dp[i+k] - dp[i] < mn)
  {
   mn = dp[i+k] - dp[i];
   idx = i+1;
  }
 }
 cout << idx << endl;
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}