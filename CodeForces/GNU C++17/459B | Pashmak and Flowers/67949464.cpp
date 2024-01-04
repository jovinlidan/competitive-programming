#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
lli solve(lli x){
 lli ans = 0;
 for(lli i = x-1; i >= 0; i--){
  ans+= i;
 }
 return ans;
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 lli n, b[200005]={}, mx=-1e9, mn=1e9, cntMX=0, cntMN=0;
 cin >> n;
 for(lli i = 0; i < n ; i++){
  cin >> b[i];
  mx = max(mx, b[i]);
  mn = min(mn, b[i]);
 }
 
 for(lli i = 0; i < n; i++){
  if(b[i] == mx) cntMX++;
  else if(b[i] == mn) cntMN++;
 }
 if(mx == mn) cout << mx - mn << " " << solve(cntMX) << endl;
 else cout << mx-mn << " " << cntMX * cntMN<< endl;
 
 
 
    return 0;
}