#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, cnt[1005] = {};
    set<pair<int, int>> forbi;
    cin >> n >> k;
    int l, r;
    for(int i = 0; i < k; i++)
 {
  cin >> l >> r;
  cnt[l]++;
  cnt[r]++;
  forbi.insert({l, r});
  forbi.insert({r, l});
 }
 
    int mn = 1e9, lowDot= -1, roads[1005] = {};
    for(int i = 1; i <= n; i++)
 {
  if(cnt[i] < mn)
  {
   mn = cnt[i];
   lowDot = i;
  }
 }
 vector<pair<int, int >> paths;
 for(int i = 1; i <= n; i++)
 {
  if(i == lowDot) continue;
        if(forbi.count({i, lowDot}) == 0)
  {
            roads[i]++;
            roads[lowDot]++;
            paths.push_back({i, lowDot});
  }
 }
 
 for(int i = 1; i <= n; i++)
 {
  if(roads[i] == 0)
  {
            for(int j =  1; j <= n; j++)
   {
                if(i == j)continue;
                if(roads[j] == 1 && forbi.count({i, j}) == 0)
    {
     paths.push_back({i, j});
     roads[j]++;
     roads[i]++;
     break;
    }
   }
  }
 }
 cout << paths.size() << endl;
 for(int i = 0; i < paths.size(); i++)
 {
  cout << paths[i].first << " " << paths[i].second << endl;
 }
 //cout << lowDot << endl;
 
 
 
 
 
 
 
 
 
 return 0;
}