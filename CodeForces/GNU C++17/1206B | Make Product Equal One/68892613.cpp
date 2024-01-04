#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli n , ans=0, arr[100005]={};
lli dp[100010][2]={};
lli solve(lli idx, lli proCoin)
{
    lli idxDua = 0;
    if(proCoin == 1) idxDua = 1;
    if(dp[idx][idxDua]!= 0) return dp[idx][idxDua];
    if(idx == n+1 && proCoin == 1) return 0;
    else if (idx == n+1 && proCoin == -1) return INT_MAX;
    //cout << idx << " " << proCoin << endl;
    lli neg = abs(arr[idx]+1);
    lli pos = abs(arr[idx]-1);
 
    return dp[idx][idxDua] = min(solve(idx+1, proCoin*-1) + neg , solve(idx+1, proCoin*1)+pos ) ;
 
}
 
 
int main()
{
    cin >> n;
    for(int i =1 ;i <= n; i++)
    {
        cin >> arr[i];
    }
    cout << solve(1, 1) << endl;
 
 
 
 
 
 
 
 
    return 0;
}