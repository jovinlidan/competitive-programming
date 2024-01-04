#include <bits/stdc++.h>
using namespace std;
int n, m;
bool visited[55][55] = {false};
char arr[55][55];
 
bool dfs(int i, int j,int x, int y, int first, char karakter)
{
 if(i < 1 || i > n || j < 1 || j > m)return false;
 if(arr[i][j] != karakter)return false;
    if(first > 3 && i == x && j == y)
 {
  //cout << first << " " << i << "-" << j << " " << x << " " << y <<  endl;
  return true;
 }
    if(visited[i][j])return false;
 visited[i][j] = true;
 //if(x ==3 && y==1)cout<< i << " " << j << "-" << first << endl;
 first++;
 bool c3 = dfs(i, j+1, x, y, first, karakter);
 bool c2 = dfs(i-1, j, x, y, first, karakter);
 bool c4 = dfs(i, j-1, x, y, first, karakter);
 bool c1 = dfs(i+1, j, x, y, first, karakter);
 
 return (c1 || c2 || c3 || c4);
 
}
int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
 {
  for(int j = 1; j <= m; j++)
  {
   cin >> arr[i][j];
  }
 }
 
 for(int i = 1; i <= n; i++)
 {
  for(int j =1; j <= m; j++)
  {
//   if(!visited[i][j])
//   {
   // cout << arr[i][j] << endl;
    bool valid = dfs(i, j, i, j, 0, arr[i][j]);
    //cout << i << " " << j << " "<< valid <<  endl;
    if(valid)
    {
     cout << "Yes" << endl;
     return 0;
    }
   memset(visited, false, sizeof(visited));
   //}
  }
 }
 cout << "No" << endl;
 
//    for(int i = 1; i <= n; i++)
// {
//  for(int j =1; j <= m; j++)
//  {
//   cout << visited[i][j];
//  }
//  cout << endl;
// }
 
 return 0;
}