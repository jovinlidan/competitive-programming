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
 
    int n, xxx;
    cin >> n;
    unordered_map<ll, int> adj;
    vector<pii> pairs;
    adj[0] = 0;
    ll sum = 0;
 
    for(int i = 0; i < n; i++)
    {
        cin >> xxx;
        sum += xxx;
        if(adj[sum] != 0 || sum == 0)
        {
            int px = adj[sum];
            pairs.push_back({px, i});
        }
        adj[sum]= i+1;
    }
    sort(pairs.begin(), pairs.end(), cmp);
    int length = pairs.size();
 
//    for(int i = 1; i < length; i++)
//    {
//        pl = pairs[i-1].first;
//        pr = pairs[i-1].second;
//        l = pairs[i].first;
//        r = pairs[i].second;
//
//        if(pr >= l)
//        {
//            pairs[i-1].first = max(l, pl);
//            pairs[i].first = pairs[i-1].first;
//
//            pairs[i-1].second = min(r, pr);
//            pairs[i].second = pairs[i-1].second;
//        }
//
//    }
 
    int last = 0;
    sum = 0;
    for(int i = 0; i < length; i++)
    {
        if(pairs[i].first >= last)
        {
            last = pairs[i].second;
            sum++;
        }
    }
    cout << sum << '\n';
 
//    for(auto i : pairs)
//    {
//        cout << i.first << " " << i.second << '\n';
//    }
    //cout << ans << '\n';
 
 
 
    return 0;
}