#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, m;
 cin >> n >> m;
 char arr[105][105]={};
 
 for(int i = 0; i < n; i++)
 {
  string s;cin >> s;
  for(int j = 0; j < m; j++)
  {
   arr[i][j] = s[j];
  }
 }
 for(int i = 0; i < n; i++)
 {
  for(int j = 0; j < m; j++)
  {
   if(arr[i][j] == '.')
   {
    if(j % 2 == 0)
    {
     if(i % 2 == 0)
     {
      cout << 'B';
     }
     else cout << 'W';
    }
    else
    {
     if(i % 2 == 0)
     {
      cout << 'W';
     }
     else cout << 'B';
    }
   }
   else cout << '-';
  }
  cout << endl;
 
 }
 
 
 
 
 
 return 0;
}