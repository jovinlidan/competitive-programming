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
 
   int n, l, r, y, k = 0, cnt = 0;
   cin >> n;
   vector<pii> vec;
   for(int i = 0; i < n; i++)
   {
       cin >> l >> r;
       vec.push_back({l, 1});
       vec.push_back({r, 0});
   }
   sort(vec.begin(), vec.end());
   n = vec.size();
   for(int i = 0; i < n; i++)
   {
        l = vec[i].first;
        r = vec[i].second;
        if(r)
        {
            cnt++;
            if(cnt > k)
            {
                y = l;
                k = cnt;
            }
        }
        else cnt--;
   }
   cout << y << " " << k << '\n';
 
 
 
 
    return 0;
}