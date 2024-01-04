#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
bool cmp(lli x, lli y)
{
 return x > y;
}
int main()
{
 lli n, m;
 cin >> n >> m;
 lli a, b, total=0;
 vector<lli>ans;
 
 for(int i = 0; i < n; i++)
 {
  cin >> a >> b;
  ans.push_back(a-b);
  total+=a;
 }
 sort(ans.begin(), ans.end(), cmp);
 lli idx = 0, hsl = 0;
 while(total > m && idx < ans.size())
 {
  total -= ans[idx];
  hsl++;
  idx++;
 }
 if(total > m) cout << -1 << endl;
 else cout << hsl << endl;
 
 
 
 
 
 
 
 return 0;
}