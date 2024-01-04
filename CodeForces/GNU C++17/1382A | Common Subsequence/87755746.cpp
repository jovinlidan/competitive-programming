#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int tc;
 cin >> tc;
 while(tc--)
 {
  int n, m, ans = -1, temp;
  cin >> n >> m;
  unordered_map<int, bool> vis;
  for(int i = 0; i < n; i++)
  {
   cin >> temp;
   vis[temp] = 1;
  }
  bool solved = false;
  for(int i = 0; i < m; i++)
  {
   cin >>temp;
   if(!solved)
   {
    if(vis[temp])
    {
     solved = true;
     ans = temp;
    }
   }
  }
  if(solved)
  {
   cout << "YES\n";
   cout << 1 << " " << ans << '\n';
  }
  else cout  << "NO\n";
 
 
 }
}