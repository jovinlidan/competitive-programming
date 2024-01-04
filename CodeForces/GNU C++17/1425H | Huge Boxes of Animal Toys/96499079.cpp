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
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
   int tc;
   cin >> tc;
   while(tc--)
   {
       int a,b,c,d;
       cin >> a >> b >> c >>d;
       bool aa = 0, bb = 0, cc = 0, dd = 0;
       if((a+b) % 2 == 1)
       {
           if(a >= 1 || d >= 1)aa = 1;
           if(b >= 1 || c >= 1)bb = 1;
       }
       else
       {
           if(a>=1 || d >= 1)dd = 1;
           if(c >= 1 || b >= 1)cc = 1;
       }
       if(aa)cout << "Ya ";
       else cout << "Tidak ";
       if(bb)cout << "Ya ";
       else cout << "Tidak ";
       if(cc)cout << "Ya ";
       else cout << "Tidak ";
       if(dd)cout << "Ya ";
       else cout << "Tidak ";
 
       cout << '\n';
 
   }
 
 
 
    return 0;
}