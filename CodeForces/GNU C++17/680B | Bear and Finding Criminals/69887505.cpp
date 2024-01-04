#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, asal, arr[105] = {}, left, right, mn = 1, ans = 0;
 cin >> n >> asal;
 for(int i= 0;i < n; i++)
 {
  cin >> arr[i];
 
 }
 asal--;
 if(arr[asal] == 1)ans++;
 left = asal;
 right = asal;
 left--;
 right++;
 
 while(left >= 0 || right < n)
 {
  if(left >= 0 && right < n)
  {
   if(arr[left] == 1 && arr[right] == 1) ans += 2;
  }
  else if(left < 0 && right < n)
  {
   if(arr[right] == 1) ans++;
  }
  else if(left >= 0 && right >= n)
  {
   if(arr[left] == 1) ans++;
  }
 
  left--;
  right++;
 }
 cout << ans << endl;
 return 0;
 
 
}