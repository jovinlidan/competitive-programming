#include <bits/stdc++.h>
using namespace std;
int main()
{
 long long int n, one=0 , temp, zero=0, arr[105] = {}, ans= 0;
 bool visited[105] = {false};
 cin >> n;
 memset(arr, -1, sizeof(arr));
 for(int i = 1 ; i <= n;i++)
 {
  cin >> arr[i];
 }
 
 for(int i = 1; i <= n; i++)
 {
  if(arr[i] == 1)
  {
   ans = max(1LL, ans);
   int cnt = 0;
   if(arr[i-1] == 0 && !visited[i-1])
   {
    visited[i-1] = true;
    ans *= 1;
   }
   for(int j = i+1; j <= n; j++)
   {
    visited[j] = true;
    if(arr[j] == 1)
    {
     ans*= (cnt+1);
     //cout << j << endl;
     i = j-1;
     break;
    }
    else if(arr[j] == 0)cnt++;
 
   }
  }
 
 }
 cout << ans << endl;
 
 
 
 
 
 
 
 
 return 0;
}