#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int tc;
 cin >> tc;
 while(tc--)
 {
  int n, arr[55] = {};
  cin >> n;
  for(int i = 0; i < n; i++)
  {
   cin >> arr[i];
 
  }
  sort(arr, arr+n);
  int mn = 1e9;
  for(int i = 0; i < n-1; i++)
  {
   mn = min(mn, abs(arr[i] - arr[i+1]));
  }
  cout << mn << '\n';
 
 
 }
 
 
 
 
}