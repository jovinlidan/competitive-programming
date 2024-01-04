#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 lli n;
 cin >> n;
 lli arr[n+5] = {};
 for(int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 lli mid = ceil(n/2.0);
 
 for(int i = 0; i < mid; i++)
 {
  if(!(i & 1)) swap(arr[i], arr[n-i-1]);
 }
 for(int i = 0; i < n; i++)
 {
  if(i != 0) cout << " ";
  cout << arr[i];
 }
 
 
 
 
 
 
 
 
 
 return 0;
}