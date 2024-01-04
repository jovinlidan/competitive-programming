#include <bits/stdc++.h>
using namespace std;
 
bool visited[1005][1005] = {false};
int dp[1005][1005] = {0};
int n, m , k, ans = 0;
char arr[1005][1005] = {};
vector<pair<int, int>> paths;
void solve(int x, int y)
{
 if(x < 1 || x > n || y < 1 || y > m)return;
 if(arr[x][y] == '*')return;
 if(visited[x][y])return;
 visited[x][y] = true;
 paths.push_back({x, y});
 if(arr[x][y] == '.')
 {
  if(arr[x-1][y] == '*')ans++;
  if(arr[x+1][y] == '*')ans++;
  if(arr[x][y-1] == '*')ans++;
  if(arr[x][y+1] == '*')ans++;
 }
 solve(x+1, y);
 solve(x, y+1);
 solve(x-1, y);
 solve(x, y-1);
 
 
 
 
}
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
    cin >> n >> m >> k;
 
 for(int i = 1; i <= n; i++)
 {
  for(int j = 1; j <= m; j++)
  {
   cin >> arr[i][j];
  }
 }
 int a, b;
 for(int i = 0; i < k; i++)
 {
  cin >>a  >> b;
  ans = 0;
  if(dp[a][b] == 0)
  {
   paths.clear();
   solve(a, b);
   dp[a][b] = ans;
   for(int i = 0; i < paths.size(); i++)
   {
    dp[paths[i].first][paths[i].second] = ans;
   }
 
  }
  else
  {
   ans = dp[a][b];
  }
  cout << ans << endl;
  //memset(visited, false, 1010025);
 }
 
 
 
 
 
 
 
 
 
 
 
}