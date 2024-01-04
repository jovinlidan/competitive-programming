#include <bits/stdc++.h>
using namespace std;
 
int parent[105] = {};
int finds(int x)
{
 if(x == parent[x])return x;
 else return finds(parent[x]);
}
void unions(int x, int y)
{
 x = finds(x);
 y = finds(y);
 if(x == y)return;
 parent[y] = x;
}
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 for(int i = 1; i <= 100; i++)
 {
  parent[i] = i;
 }
 
    int n, m;
    cin >> n >> m;
 vector<vector<int>> bahasa(m+5);
 vector<vector<int>> skillPerorang(n+5);
 int learned[105] = {}, manyLanguage = -1, mx=-1e9;
    for(int i = 1; i <= n; i++)
 {
  int k;
  cin >> k;
  learned[i] += k;
  if(learned[i] > mx)
  {
   mx = learned[i];
   manyLanguage = i;
  }
  for(int j = 0; j < k; j++)
  {
   int language;
   cin >> language;
   skillPerorang[i].push_back(language);
   bahasa[language].push_back(i);
  }
 }
 int ans = 0;
 for(int i = 1; i <= m; i++)
 {
  for(int j = 1; j < bahasa[i].size(); j++)
  {
   unions(bahasa[i][j-1], bahasa[i][j]);
   //cout << bahasa[i][j] << i << "-INI-\n";
  }
  //cout << endl;
 }
 if(skillPerorang[manyLanguage].size() == 0) ans++;
 //cout << manyLanguage << endl;
 for(int i = 1; i <= n; i++)
 {
  if(finds(i) != finds(manyLanguage))
  {
   unions(manyLanguage,i);
   ans++;
  }
 }
 cout << ans << endl;
 return 0;
}
 
 
 
 
 
 
 
 