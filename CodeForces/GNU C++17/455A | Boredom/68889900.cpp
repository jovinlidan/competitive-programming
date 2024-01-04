#include <bits/stdc++.h>
#define lli long long int
#define eb(x) emplace_back(x)
using namespace std;
 
 
lli cnt[100005]={};
lli n,temp,  mx = -1e9,mn = 1e9;
vector <lli> arr;
lli dp[100005]={};
lli solve(lli tempAns, lli idx, lli disableInt)
{
 if(disableInt == arr[idx])
 {
  idx+=1;
 }
 
 if(idx >= arr.size())
 {
  return tempAns;
 }
 if(dp[idx]!= 0)return dp[idx]+tempAns;
 lli temp = tempAns + (arr[idx] * cnt[arr[idx]]);
 return dp[idx] = max(solve(temp, idx+1, arr[idx]+1), solve(tempAns, idx+1, 0));
 
 
 
}
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
    cin >> n;
 
    for(lli i = 1 ; i <= n ; i++)
    {
        cin >> temp;
        cnt[temp]++;
        if(cnt[temp] == 1)arr.eb(temp);
    }
    sort(arr.begin(), arr.end());
 
 cout << max(solve(0, 0, 0), solve(0,1,0));
 
    return 0;
}