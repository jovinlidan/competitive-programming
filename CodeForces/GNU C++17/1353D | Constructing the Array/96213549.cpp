#include <bits/stdc++.h>
#define mxN 200005
using namespace std;
typedef long long int  ll;
typedef pair<int, int> pii;
typedef pair<int, pair<int, int>> piii;
 
 
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
       int n;
       cin>> n;
       vector<int> ans(n+2);
       priority_queue<piii, vector<piii>, greater<piii>> q;
       q.push({-(n-1), {1, n}});
       int l = 1, r = n, i = 1;
       //bool v = n%2== 0;
      while(!q.empty())
      {
           l = q.top().second.first;
           r = q.top().second.second;
           q.pop();
            int m = (l+r)/2;
           if(l <= r && !ans[m])
           {
               // cout << l << " " << r << '\n';
               ans[m] = i;
                q.push({-((m-1)-l),{l, m-1}});
                q.push({-(r-(m+1)),{m+1, r}});
               i++;
           }
 
       }
 
 
           for(int i = 1; i <= n; i++)
           {
               cout << ans[i];
               if(i != n)cout << " ";
           }
           cout << '\n';
    }
 
 
    return 0;
}
 
 
 
 
//l+r/2;