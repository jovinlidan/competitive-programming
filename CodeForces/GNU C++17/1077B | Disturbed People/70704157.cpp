#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, arr[106] = {}, ans = 0;
 cin >> n;
 for(int i = 1; i <= n; i++)
 {
  cin >> arr[i];
 }
 
 for(int i = 1; i <= n; i++)
 {
  if(arr[i] == 0)
  {
   if(arr[i+1] == 1 && arr[i-1] == 1)
   {
    arr[i+1] = 0;
    i+=1;
    ans++;
   }
  }
 }
 cout << ans << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}