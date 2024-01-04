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
  int n, ans = 0;
  cin >> n;
  while(1)
  {
   if(n % 6 ==0)
   {
    n/=6;
    ans++;
   }
   else if(n % 3 == 0)
   {
    n/=3;
    ans+=2;
   }
   else break;
 
 
  }
  if(n == 1)cout << ans << '\n';
  else cout << "-1\n";
 
   }
}