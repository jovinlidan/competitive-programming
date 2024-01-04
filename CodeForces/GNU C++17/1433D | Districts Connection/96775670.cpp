#include<bits/stdc++.h>
#define mxN 100005
using namespace std;
typedef long long int ll;
typedef pair<int, int> pii;
typedef long long int ll;
 
 
//bool leap(int year)
//{
//    if(year == 0)return 1;
//    return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
//}
//
//bool valid(int d, int m, int y)
//{
//    if (m < 1 || m > 12) return false;
//    if (d < 1 || d > 31)return false;
//
//    if (m == 2)
//    {
//        if (leap(y)) return (d <= 29);
//        else return (d <= 28);
//    }
//    if (m == 4 || m == 6 || m == 9 || m == 11) return (d <= 30);
//
//    return true;
//}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        int a[n+5] = {}, start = 0, total = 0;
        vector<pii> ans;
        bool vis[n+5] = {};
        vis[0] = 1;
        for(int i = 0; i < n; i++)cin >> a[i];
        for(int i = 1; i < n; i++)
        {
            if(a[start] == a[i])continue;
            vis[i] = 1;
            ans.push_back({start+1, i+1});
            total++;
        }
        bool v= 0;
        if(total != n-1)
        {
            for(int i = 1; i < n; i++)
            {
                if(vis[i])continue;
                v = 0;
                for(int j = 1; j < n; j++)
                {
                    if(i == j)continue;
                    if(a[i] != a[j])
                    {
                        ans.push_back({i+1, j+1});
                        total++;
                        vis[i] = 1;
                        v = 1;
                        break;
                    }
                }
                if(!v)break;
            }
 
 
        }
        if(total != n-1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            for(int i = 0; i < n-1; i++)
            {
                cout << ans[i].first << " "<< ans[i].second << '\n';
            }
 
        }
 
 
    }
 
 
 
 
   return 0;
}