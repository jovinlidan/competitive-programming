#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int tc;
 cin >> tc;
 while(tc--)
 {
  int n, temp, sama = 0, beda= 0;
  unordered_map<int , int> vis;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
   cin >> temp;
   vis[temp]++;
   if(vis[temp] == 1)
   {
    beda++;
   }
   else
   {
 
    sama = max(sama, vis[temp]);
   }
  }
  //cout << sama << "-" << beda << '\n';
  if(beda > sama)
  {
   if(sama == 0)
   {
    if(beda > 1)cout << 1 << '\n';
    else cout << 0 << '\n';
   }
   else cout << sama << '\n';
  }
  else if(sama > beda)
  {
   cout << beda << '\n';
  }
  else cout << beda-1 << '\n';
 
 }
 
}