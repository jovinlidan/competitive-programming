#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, m;
 int A[55][55] = {}, B[55][55] = {};
 vector<pair<int, int>> ans;
 
 
 cin >> n >> m;
 for(int i = 1; i <= n; i++)
 {
  for(int j = 1; j <= m; j++)
  {
   cin >> A[i][j];
  }
 }
 
 
 for(int i = 1; i <= n; i++)
 {
  for(int j = 1; j <= m; j++)
  {
   if(A[i][j] == 1 && A[i+1][j] == 1 && A[i][j+1] == 1 && A[i+1][j+1] == 1 )
   {
    ans.push_back({i, j});
    B[i][j] = 1;
    B[i+1][j] = 1;
    B[i][j+1] = 1;
    B[i+1][j+1] = 1;
 
   }
  }
 }
 for(int i = 1; i <= n; i++)
 {
  for(int j = 1;j <= m; j++)
  {
   if(A[i][j] != B[i][j])
   {
    cout << "-1\n";
    return 0;
   }
  }
 }
 cout << ans.size() << endl;
 for(auto i : ans)
 {
  cout << i.first << " " << i.second << endl;
 }
 
 
 
 
 
 
 
 return 0;
}