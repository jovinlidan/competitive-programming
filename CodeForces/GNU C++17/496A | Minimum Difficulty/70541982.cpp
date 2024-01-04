#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cout.tie(0);
 cin.tie(0);
 int n, arr[105] = {}, mn= 1e9, idx = -1, ans= -1e9;
 cin >> n;
 
 for(int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 
 for(int i =0; i < n-2; i++)
 {
  if(arr[i+2] - arr[i] < mn)
  {
   mn = arr[i+2] - arr[i];
   idx = i+1;
  }
 }
 arr[idx] = 0;
 sort(arr, arr+n);
 
 for(int i = 1; i < n-1; i++)
 {
  if(arr[i+1] - arr[i] > ans)
  {
   ans = arr[i+1] - arr[i];
  }
 }
 cout << ans << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}