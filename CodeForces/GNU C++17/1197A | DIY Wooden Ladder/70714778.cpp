#include <bits/stdc++.h>
using namespace std;
int main()
{
 
 int tc;
 cin >> tc;
 while(tc--)
 {
 
  int n;
  cin >> n;
  int arr[100005] = {};
  for(int i = 0; i < n; i++)
  {
   cin >> arr[i];
  }
  sort(arr, arr+n, greater<int>());
  int ans = 0;
  ans = min(arr[1] -1 , n-2 );
  cout << ans  << endl;
 
 
 
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}