#include <bits/stdc++.h>
using namespace std;
 
vector<vector<char>> adj(100);
vector <string> jwbn;
void solve(string ans, char cur, char last, map<char, bool> visited)
{
 if(cur == last)
 {
  ans += '-';
        ans += last;
        jwbn.push_back(ans);
        return;
 }
 if(visited[cur])return;
 visited[cur] = true;
 ans += '-';
 ans += cur;
 for(int i = 0; i < adj[cur].size(); i++)
 {
  //cout << adj[cur][i] << "-ini-" << ans << "\n";
        solve(ans, adj[cur][i], last, visited);
 }
}
int main()
{
   int tc;
   cin >> tc;
   while(tc--)
   {
  int x, y, n;
  cin >> x >> y >> n;
  if(n % x < y)
  {
   cout << n - x + abs(n%x - y) << '\n';
  }
  else if(n % x > y)
  {
            cout << n - abs(n%x - y) << '\n';
  }
  else cout << n << '\n';
 
   }
}