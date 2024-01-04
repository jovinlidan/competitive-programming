#include <bits/stdc++.h>
using namespace std;
#define mxN 200005
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<int, pair<int, int>> piii;
 
bool cmp (pair<int, int> l , pair<int, int> r)
{
    return l.second < r.second;
}
bool check(ll n)
{
    if(n == 4)return 0;
    int xxx = n;
    while(xxx != 1)
    {
        if(xxx & 1)return 0;
        xxx >>= 1;
    }
    return 1;
}
 
int main()
{
  //  cout << check(4);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
   int tc;
   cin >> tc;
   while(tc--)
   {
       ll l= 0, r= 0;
        bool t = 1;
       ll n;
       cin >> n;
        bool odd = (n&1);
        if(odd)n--;
        ll ans = 1, nn = n;
       while(n != 0)
       {
           if(t)
           {
               if( (n&1 || (n%2 == 0 && ( (n/2) & 1) == 0) || check(n) ) && n != 4)
               {
                  // cout << 1 << n << '\n';
                   n--;
                   l++;
               }else
               {
                   n >>= 1;
                   l += n;
                  // cout << n << '\n';
               }
           }
           else
           {
               if(n&1)
               {
                   n--;
                   r++;
               }else
               {
                   n >>= 1;
                   r += n;
               }
           }
            t = !t;
       }
       if(odd)
       {
          // cout << l << '\n';
           cout << ans + (nn - l) << '\n';
       }
       else cout << l << '\n';
 
   }
 
 
 
 
    return 0;
}