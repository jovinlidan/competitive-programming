#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, r, lTotal = 0, rTotal = 0, ans = -1;
    cin >> n;
    vector<pair<int, int>> arr;
    for(int i = 0; i < n; i++)
 {
  cin >> l >> r;
  arr.push_back({l, r});
  lTotal += l;
  rTotal += r;
 }
    if(lTotal % 2==0 && rTotal % 2==0)cout << 0 << endl;
    else if(lTotal % 2 == 1 && rTotal % 2 == 1)
 {
  for(int i = 0; i < n; i++)
  {
   if(abs(arr[i].first - arr[i].second) % 2 == 1)ans = 1;
  }
  cout << ans << endl;
 
 }
 else cout << -1 << endl;
 
 
 
 
 
 return 0;
}