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
       int n, m, xxx;
       ll total = 0;
       cin >> n >> m;
       for(int i = 0; i < n; i++)
       {
           cin >> xxx;
           total += xxx;
       }
       cout << (total== m? "YES\n" : "NO\n");
 
   }
 
 
 
 
    return 0;
}