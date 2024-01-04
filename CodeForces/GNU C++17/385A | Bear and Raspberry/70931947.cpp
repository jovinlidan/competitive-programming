#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n, k, arr[105] = {}, mx= 0;
 cin >> n >> k;
 
 for(int i =0 ;i < n; i++)
 {
  cin >> arr[i];
  if(i >= 1)
  {
   mx= max(mx, arr[i-1] - arr[i] - k);
  }
 }
 cout << mx << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}