#include <bits/stdc++.h>
using namespace std;
int dp[20] = {};
bool solve(int idx, int curPos, int arr[], int n)
{
 //cout << curPos << " " << idx << endl;
 if(dp[idx] != 0) return dp[idx];
 if(curPos == 0 && idx == n) return true;
 if(idx == n) return false;
 //cout << curPos  << " " << arr[idx] << "--"<<  endl;
 int pls = (curPos + arr[idx]) % 360;
 int mn = (360 + (curPos - arr[idx])% 360) % 360;
 //cout << pls << " " << mn << "--"<<  endl;
 return dp[idx] = (solve(idx+1, pls , arr, n) || solve(idx+1, mn, arr, n));
 
 
 
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n, arr[20] ={};
 cin >> n;
 for(int i =0 ; i < n; i++)
 {
  cin >> arr[i];
 }
 if(solve(0, 0, arr, n)) cout << "YES\n";
 else cout << "NO\n";
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}