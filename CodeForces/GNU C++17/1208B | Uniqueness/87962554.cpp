#include <bits/stdc++.h>
using namespace std;
#define lli long long int
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int n;
 cin >> n;
 int arr[n+2] = {}, ans = n;
 for(int i = 0; i < n; i++)cin >> arr[i];
 unordered_map<int , int> vis;
 
 
 
 for(int i =0; i < n; i++)
 {
  vis.clear();
  bool noDup = true;
  for(int j = 0; j < i; j++) // PREFIX
  {
   vis[arr[j]]++;
   if(vis[arr[j]] > 1)
   {
    noDup = false;
    break;
   }
  }
 
  if(!noDup)continue;
  int suffix = n;
  for(int j = n-1; j >= i; j--)
  {
   vis[arr[j]]++;
   if(vis[arr[j]] > 1)break;
   suffix = j;
 
  }
  ans = min(ans, suffix - i);
 }
 cout << ans << '\n';
 
 
 
 
 
}
 