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
  int n, arr[200] = {};
  vector<int> ans;
  bool valid[200] = {false};
  cin >> n;
  for(int i = 0; i < 2*n; i++)
  {
   cin >> arr[i];
   if(!valid[arr[i]] )
   {
    valid[arr[i]]= true;
    ans.push_back(arr[i]);
   }
 
  }
  for(int i = 0; i < ans.size(); i++)
  {
   if(i!= 0)cout << " ";
   cout << ans[i];
  }
  cout << '\n';
 }
}