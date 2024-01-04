#include <bits/stdc++.h>
using namespace std;
#define lli long long int
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int tc;
 cin >> tc;
 while(tc--)
 {
  int n, mx = 0;
  cin >> n;
  int arr[n+4] = {};
  for(int i = 0; i < n;i++)
  {
   cin >> arr[i];
  }
  sort(arr, arr+n);
 
  for(int i =0; i < n;i++)
  {
   if(i+1 >= arr[i])mx = i+1;
  }
  cout << mx+1 << '\n';
 }
 
 
 
 
 
 
 
 
}
 