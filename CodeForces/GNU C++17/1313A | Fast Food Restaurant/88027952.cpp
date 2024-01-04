#include <bits/stdc++.h>
using namespace std;
#define lli long long int
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int tc;
 cin >> tc;
 while(tc--)
 {
  int a, b, c;
  cin >> a >> b >>c ;
  int ans  = 0;
  if(b > a)swap(a, b);
  if(c > a)swap(a, c);
 
  if(a > 0)
        {
            a--;
            ans++;
        }
        if(b> 0)
        {
            b--;
            ans++;
        }
        if(c > 0)
        {
            c--;
            ans++;
        }
        if(a > 0 && b > 0)
        {
            a--;
            b--;
            ans++;
        }
        if(a > 0 && c > 0)
        {
            a--;
            c--;
            ans++;
        }
        if(c > 0 && b > 0)
        {
            c--;
            b--;
            ans++;
        }
        if(a > 0 && b > 0 && c > 0)
        {
            a--;
            b--;
            c--;
            ans++;
        }
        cout << ans << '\n';
 }
 
 
 
 
 
 
 
 
}
 