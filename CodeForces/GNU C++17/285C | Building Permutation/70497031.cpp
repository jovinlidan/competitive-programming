#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 lli n, ans=0;
 cin >> n;
 lli arr[300005] = {};
 for(lli i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 sort(arr, arr+n);
 
 for(lli i = 0; i < n; i++)
 {
  ans += abs(i+1 - arr[i]);
 }
 cout<< ans << endl;
 
 
 
 
 
 
 
 
 
 
 return 0;
}