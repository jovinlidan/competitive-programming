#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// cout.tie(0);
 lli n,k, arr[200005] = {}, total=0, temp;
 vector<lli> dp;
 cin >> n>> k;
 for(int i = 0; i < n; i++)
 {
  cin >> arr[i];
  total+= arr[i];
  dp.push_back(total);
 }
// for(auto i : dp)
// {
//  cout << i << endl;
// }
 for(int i = 0; i < k; i++)
 {
  cin >> temp;
  lli idx = lower_bound(dp.begin(), dp.end(), temp) - dp.begin();
  lli hsl = dp[idx] - arr[idx];
  temp -= hsl;
  cout << idx+1 << " " << temp << endl;
  //cout << *(lower_bound(dp.begin(), dp.end(), temp)) << endl;
 
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}