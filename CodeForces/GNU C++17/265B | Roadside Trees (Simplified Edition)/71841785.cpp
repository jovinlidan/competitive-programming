#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 lli n, lastH = 0, ans=-1;
 cin >> n;
 bool jumped = false;
 lli arr[n];
 for(lli i = 1; i <= n; i++)
 {
  cin >> arr[i];
 }
 
 for(lli i = 1; i <= n; i++)
 {
  ans++;
  ans += (arr[i] - lastH);
 
  ans++;
  if(arr[i+1] < arr[i])
  {
   ans += (arr[i] - arr[i+1]);
   lastH = arr[i+1];
  }
  else
  {
   lastH = arr[i];
  }
 
 }
 cout << ans;
 
 
 
 
 
 
 
 
 return 0;
}