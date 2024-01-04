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
  int n, ans = 0;
  cin >> n;
  int arr[100005] = {};
  unordered_map<int, bool> vis;
  for(int i = 0; i < n; i++)
  {
   cin >> arr[i];
   if(!vis[arr[i]])
   {
    ans++;
    vis[arr[i]] = true;
   }
  }
  cout<< ans << '\n';
 
 
 }
 
}