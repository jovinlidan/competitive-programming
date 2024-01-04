#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, l, r, lastMin ;
    vector<pair<int, int>> seg;
    cin >> n >> x;
    for(int i = 0; i < n; i++)
 {
  cin >> l >> r;
  seg.push_back({l, r});
  lastMin = r;
 
 }
 int idx = 0, curMin = 1, ans = 0;
 
 while(curMin <= lastMin)
 {
        if(curMin + x <= seg[idx].first)
  {
            curMin += x;
  }
  else
  {
   ans += (seg[idx].second - curMin) + 1;
   curMin = seg[idx].second+1;
   idx++;
  }
 
 }
 cout << ans << endl;
 
 
 
 
 
 
 
 return 0;
}