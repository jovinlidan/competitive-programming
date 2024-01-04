#include <bits/stdc++.h>
using namespace std;
int main()
{ ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n, need[100005], cost[100005], totalNeed = 0, ans=0, mn=1e9;
 
 cin >> n;
 for(int i = 0; i < n;i++){
  cin >> need[i] >> cost[i];
  if(mn > cost[i]){
   mn = cost[i];
  }
  ans += need[i] * mn;
 
 
 
 }
 cout << ans << endl;
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}