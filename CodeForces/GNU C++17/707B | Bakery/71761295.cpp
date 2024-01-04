#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 lli n,m, k, l, r, w, mn = 1e10, temp;
 cin >> n >> m >> k;
 vector<vector<pair<lli, lli>>> vertx(n+5);
 bool vst[100005] = {false};
 bool used[100005] = {false};
 for(lli i = 0; i < m ; i++)
 {
  cin >> l >> r >> w;
  vertx[l].push_back({r, w});
  vertx[r].push_back({l, w});
  used[l] = true;
  used[r] = true;
 }
 vector<lli> storage(k+5);
 for(lli i = 0; i < k; i++)
 {
  cin >> storage[i];
  vst[storage[i]] = true;
 
 }
 for(lli i = 0; i < k; i++)
 {
  if(!used[storage[i]])continue;
  for(lli j = 0; j < vertx[storage[i]].size(); j++)
  {
   r = vertx[storage[i]][j].first;
   w = vertx[storage[i]][j].second;
            if(!vst[r])
   {
    mn = min(mn, w);
   }
  }
 }
 
 
 
 if(mn == 1e10) cout << -1;
 else cout << mn << endl;
 
 
 
 
 
 
 
 
 return 0;
}