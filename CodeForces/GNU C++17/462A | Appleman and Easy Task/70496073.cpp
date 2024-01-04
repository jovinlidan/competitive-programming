#include <bits/stdc++.h>
using namespace std;
int main()
{
 char arr[110][110] = {};
 int n;
 cin >> n;
 for(int i = 1; i <= n; i++)
 {
  for(int j = 1; j <= n; j++)
  {
   cin >> arr[i][j];
  }
 }
 for(int i = 1; i <= n; i++)
 {
  for(int j = 1; j <= n; j++)
  {
   int temp = 0;
   if(arr[i-1][j] == 'o')temp++;
   if(arr[i+1][j] == 'o')temp++;
   if(arr[i][j+1] == 'o')temp++;
   if(arr[i][j-1] == 'o')temp++;
   if(temp % 2 == 1)
   {
    cout << "NO\n";
    return 0;
   }
 
  }
 }
 cout << "YES\n";
 return 0;
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}