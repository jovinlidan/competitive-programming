#include <bits/stdc++.h>
#define lli long long  int
#define pii pair<lli, lli>
using namespace std;
 
bool comp(pii x, pii y)
{
 return x.second < y.second;
}
 
lli solve(lli x)
{
 return (x/2.0 * (1+x))-x;
}
 
int main()
{
 ios_base::sync_with_stdio(false);
 cout.tie(0);
 cin.tie(0);
 lli ans = 0, n;
 cin >> n;
 lli x, y;
 unordered_map<lli, lli> lefts, rights;
 map<pair<lli,lli>, lli> cnt;
 
 for(int i = 0; i < n; i++)
 {
  cin >> x >> y;
  ans += lefts[x] + rights[y] - cnt[{x, y}];
  lefts[x]++;
  rights[y]++;
  cnt[{x, y}]++;
 }
 
 cout << ans << endl;
 
 
 
 
 
 
 return 0;
}