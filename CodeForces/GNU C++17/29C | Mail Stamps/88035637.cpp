#include <bits/stdc++.h>
using namespace std;
#define lli long long int
map<int , vector<int>> adj;
void solve(int start, int last)
{
    for(auto i : adj[start])
    {
        if(i != last)
        {
            solve(i, start);
        }
    }
    cout << start << " ";
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int n, start = 0;
 cin >> n;
 
 for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(auto i : adj)
    {
        if(i.second.size() == 1)
        {
            start = i.first;
            break;
        }
    }
//    cout << start << '\n';
//    cout << adj[start].size() << '\n';
    solve(start, -1);
 
 
 
 
 
 
 
 
 
}
 