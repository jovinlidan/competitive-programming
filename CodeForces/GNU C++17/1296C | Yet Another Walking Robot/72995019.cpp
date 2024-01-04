#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int tc;
 cin >> tc;
 //vector<pair<int, int>>arr()
 while(tc--)
 {
  int n, x=0, y = 0, kiri = 0, kanan = 0;
  cin >> n;
  unordered_map<string, unordered_map<string, int>> dp;
  vector<pair<int, int>> arr(n+5);
  dp.clear();
  arr.clear();
  string s;
  cin >> s;
  bool valid = false;
  for(int i = 0; i < n; i++)
  {
   if(s[i] == 'L')x--;
   if(s[i] == 'R')x++;
   if(s[i] == 'U')y++;
   if(s[i] == 'D')y--;
 
   arr[i].first = x;
   arr[i].second = y;
  }
  string xStr, yStr; int mn = 1e9;
  for(int i = n-1; i >= 0; i--)
  {
   xStr = to_string(arr[i].first);
   yStr = to_string(arr[i].second);
   if(xStr == "0" && yStr == "0")
   {
    if(i < mn)
    {
     kiri = -1;
     kanan = i;
     mn = i;
     valid = true;
    }
   }
   if(dp[xStr][yStr] == 0)
   {
    dp[xStr][yStr] = i;
   }
   else
   {
    int gap = (dp[xStr][yStr] - i);
    if(gap < mn)
    {
     kiri = i;
     kanan = dp[xStr][yStr];
     mn = gap;
     valid = true;
    }
    dp[xStr][yStr] = i;
   }
  }
  if(!valid)
  {
   if(x == 0 &&  y == 0)
   {
    cout << 1 << " " << n << endl;
   }
   else cout << -1 << endl;
  }
  else cout << kiri+2<< " " << kanan+1 << endl;
  //cout << x << " " << y<<endl;
 
 
 }
 
 
 
 
 return 0;
}