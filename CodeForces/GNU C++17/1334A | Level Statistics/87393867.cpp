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
  bool valid = true;
  int n;
  cin >> n;
  int l , r;
  vector<pair<int, int>> arr;
 
  for(int i = 0; i < n;i++)
  {
   cin >> l >> r;
   arr.push_back({l, r});
   if(l < r)valid =false;
   if(i!= 0)
   {
    if(l < arr[i-1].first || r < arr[i-1].second)valid = false;
    if(abs(r-arr[i-1].second) > abs(l-arr[i-1].first))valid = false;
   }
  }
  if(valid)cout << "YES\n";
  else cout << "NO\n";
 }
}