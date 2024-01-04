#include <bits/stdc++.h>
using namespace std;
int main()
{
 
 char arr[505][505] = {};
    int n, m;
    cin >> n >> m;
 
    for(int i = 1; i <=n ; i++)
 {
  for(int j = 1; j <= m; j++)
  {
   cin >> arr[i][j];
  }
 }
 bool valid = true;
 
 for(int i = 1; i <=n ; i++)
 {
  for(int j = 1; j <= m; j++)
  {
   if(arr[i][j] == 'S')
   {
    if(arr[i+1][j] == 'W') valid = false;
    if(arr[i-1][j] == 'W') valid = false;
    if(arr[i][j+1] == 'W') valid = false;
    if(arr[i][j-1] == 'W') valid = false;
 
    if(arr[i+1][j] == '.') arr[i+1][j] = 'D';
    if(arr[i-1][j] == '.') arr[i-1][j] = 'D';
    if(arr[i][j+1] == '.') arr[i][j+1] = 'D';
    if(arr[i][j-1] == '.') arr[i][j-1] = 'D';
   }
  }
 }
 if(valid)
 {
  cout << "Yes\n";
  for(int i = 1; i <=n ; i++)
  {
   for(int j = 1; j <= m; j++)
   {
    cout << arr[i][j];
   }
   cout << endl;
  }
 }
 else cout << "No\n";
 
 
 
 
 
 
 
 
 
 
 return 0;
}