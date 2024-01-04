#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> arr(100005);
double ans = 0;
double solve(int idx, int lastIdx)
{
 int totalCnt = 0;double totalLength = 0;
 for(int i = 0; i < arr[idx].size(); i++)
 {
  // cout << idx << "TEST\n" << endl;
  // cout << arr[idx].size() << endl;
  //cout << i << endl;
  if(arr[idx][i] == lastIdx) continue;
  totalCnt++;
  totalLength += solve(arr[idx][i], idx) + 1;
  //cout << totalCnt << endl;
  //cout << totalLength << endl;
 }
 if(totalCnt == 0)return 0;
 return ans = totalLength* 1.0 / totalCnt;
}
int main()
{
 int n;
 cin>> n;
 int l, r;
 for(int i = 0; i < n-1; i++)
 {
  cin >> l >> r;
//  int temp = max(l, r);
//  l = min(l, r);
//  r = temp;
  arr[l].push_back(r);
  arr[r].push_back(l);
 
 }
 
 solve(1, -1);
 
// cout << totalCnt << endl;
// cout << totalLength << endl;
 cout << fixed << setprecision(12) <<ans << endl;
 
 
 
 
 
 
 return 0;
}