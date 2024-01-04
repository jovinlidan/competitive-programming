#include <bits/stdc++.h>
#define lli long long int
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
        lli n, m,lastMx, lastMn, lastTime, t, l , r, gap  = 0;
        bool valid = true;
        cin >> n >> m;
        lastTime = 0;lastMx = m; lastMn = m;
        for(lli i = 0; i < n; i++)
  {
   cin >> t >> l >> r;
            gap = t - lastTime;
            lastTime= t;
            lastMx += gap;
            lastMn -= gap;
 
            if(lastMn > r || lastMx < l)valid = false;
            lastMn = max(l, lastMn);
            lastMx = min(r, lastMx);
 
  }
  if(valid)cout << "YES" << endl;
  else cout << "NO" << endl;
 
 
 }
 
 
 
 
 
 return 0;
}