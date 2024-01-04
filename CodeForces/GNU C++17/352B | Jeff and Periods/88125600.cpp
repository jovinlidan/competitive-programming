#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
 
 
int main()
{
    const int mxN = 1e5 + 5;
    int n, x;
    cin >> n;
    set<int> beda;
    vector<vector<int>> adj(mxN);
    vector<pair<int, int>> ans;
    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        adj[x].push_back(i);
        beda.insert(x);
    }
 
    for(auto i : beda)
    {
        set<int> temp;
        int temp2 = 0;
        for(int j = 0 ; j < adj[i].size()-1; j++)
        {
            temp2 = abs(adj[i][j] - adj[i][j+1]);
            temp.insert(temp2);
        }
        if(temp.size() <= 1)ans.push_back({i, temp2});
    }
    cout << ans.size() << '\n';
    for(int i = 0; i < ans.size(); i++)cout << ans[i].first << " " << ans[i].second << '\n';
 
 
    return 0;
}