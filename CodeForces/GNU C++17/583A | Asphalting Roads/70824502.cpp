#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin >> n;
 bool left[n+5] = {false}, right[n+5] = {false};
 vector<int> ans;
 int l, r;
 for(int i = 0; i < n*n; i++)
 {
  cin >> l >> r;
  if(!left[l] && !right[r])
  {
   ans.emplace_back(i+1);
   left[l] = true;
   right[r] = true;
  }
 }
 for(int i = 0; i < ans.size(); i++)
 {
  if(i!= 0) cout << " ";
  cout << ans[i];
 }
 cout << endl;
 
 
 
 
 
 
 
 
 
 return 0;
}