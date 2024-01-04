#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, k, temp;
 cin >> n >> k;
 vector<pair<int, int>> arr;
 vector <int> ans;
 
 for(int i = 1; i <= n; i++)
 {
  cin >> temp;
  arr.push_back({temp, i});
 }
 sort(arr.begin(), arr.end());
 
 for(int i = 0; i < n ; i++)
 {
  if(k - arr[i].first >= 0)
  {
   ans.push_back(arr[i].second);
   k-= arr[i].first;
  }
 }
 cout << ans.size() << endl;
 for(int i = 0; i < ans.size(); i++)
 {
  if(i != 0) cout << " ";
  cout << ans[i];
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}