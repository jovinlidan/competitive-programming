#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n, a[1005] = {};
 cin >> n;
 vector<set<int>>arr (1005);
 
 for(int i = 1; i <= n; i++)
 {
  cin >> a[i];
  arr[a[i]].insert(i);
 }
 //cout << "SINI\n";
 vector<int> ans;
 int total= 0;
 sort(a, a+n+1, greater<int>());
 for(int i = 0; i < n; i++)
 {
  total += ((a[i]*i) + 1);
  //cout << a[i] << endl;
  auto outs = arr[a[i]].begin();
  ans.push_back(*outs);
  arr[a[i]].erase(*outs);
 }
 cout << total << endl;
 for(int i = 0; i < ans.size(); i++)
 {
  if(i != 0) cout << " ";
  cout << ans[i];
 }
 cout << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}