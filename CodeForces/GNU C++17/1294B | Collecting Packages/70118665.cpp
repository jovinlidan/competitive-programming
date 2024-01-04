#include <bits/stdc++.h>
#define ii pair<int, int>
#define vii vector<ii>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cout.tie(0);
 cin.tie(0);
 int tc;
 cin >> tc;
 while(tc--)
 {
  int n, x, y, cX = 0, cY = 0;
  string dir;
  bool is = true;
  cin >> n;
  vii xy;
  for(int i = 0; i < n; i++)
  {
   cin >> x >> y;
   xy.push_back({x, y});
  }
  sort(xy.begin(), xy.end());
  for(int i = 0; i < n; i++)
  {
   if(xy[i].first - cX < 0 || xy[i].second - cY < 0)
   {
    cout << "NO\n";
    is = false;
    break;
   }
   while(cX != xy[i].first)
   {
    cX++;
    dir.push_back('R');
   }
   while(cY != xy[i].second)
   {
    cY++;
    dir.push_back('U');
   }
   //cout << xy[i].first << "-" << xy[i].second << endl;
  }
  if(is)
  {
   cout << "YES\n";
   cout << dir << endl;
  }
 
 
 
 
 
 
 }
 
 
 
 
 
 
 return 0;
}