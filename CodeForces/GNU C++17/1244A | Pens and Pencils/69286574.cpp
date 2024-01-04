#include <bits/stdc++.h>
#define lli long long int
#define pb(x) push_back(x)
 
using namespace std;
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
    lli tc;
    cin >> tc;
    while(tc--)
 {
  lli a, b, c, d, k;
  cin >> a >> b >> c >> d >> k;
  lli t1 = ceil(a*1.0/c);
  lli t2 = ceil(b*1.0/d);
  if(t1+t2 <= k) cout << t1 << " " << t2 << endl;
  else cout << -1 << endl;
 
 }
 
 
 
 
 return 0;
}
 