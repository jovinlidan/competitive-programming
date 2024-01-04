#include <bits/stdc++.h>
#define maxN 150005
using namespace std;
set<pair<int, int >> counts;
bool ignoredList[maxN] = {false};
vector<pair<int, int>> arr;
vector<vector<int>> adj(maxN);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n>> m;
    //cout << "TESt\n";
    for(int i = 0, a, b; i < m; i++)
    {
        cin >> a >> b;
        counts.insert({a, b});
        counts.insert({b, a});
        arr.push_back({a, b});
        //arr.push_back({b, a});
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bool valid = true;
    for(int i = 0, left, right, sizes; i < m; i++)
    {
        left = arr[i].first;
        right = arr[i].second;
        if(ignoredList[left])continue;
        ignoredList[left] = true;
        sizes = adj[left].size();
    //    cout << adj[left][0] << " " << left << " INI"<< endl;
        for(int j = 0; j < sizes; j++)
        {
            if(adj[left][j] == right) continue;
            //cout << "kena" << endl;
            bool c1 = counts.count({adj[left][j], right});
            bool c2 = counts.count({right, adj[left][j]});
            if(!(c1 || c2))
            {
                valid = false;
                cout << "NO\n";
                return 0;
            }
        }
 
        sizes = adj[right].size();
    //    cout << adj[left][0] << " " << left << " INI"<< endl;
        for(int j = 0; j < sizes; j++)
        {
            if(adj[right][j] == left) continue;
            //cout << "kena" << endl;
            bool c1 = counts.count({adj[right][j], left});
            bool c2 = counts.count({left, adj[right][j]});
            if(!(c1 || c2))
            {
                valid = false;
                cout << "NO\n";
                return 0;
            }
        }
    }
    if(valid) cout << "YES\n";
    else cout << "NO\n";
 
 
 
  return 0;
}