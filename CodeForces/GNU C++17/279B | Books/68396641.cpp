#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 lli n, t, arr[100005]={}, idx=1, total = 0, i, mx = INT_MIN, cnt=0;
 cin >> n >> t;
 for(lli i = 1; i<= n; i++)
 {
  cin >> arr[i];
  total += arr[i];
  cnt++;
  while(total > t)
  {
   total -= arr[idx];
   idx++;
   cnt--;
  }
  mx = max(mx, cnt);
 }
 cout << mx << endl;
 
 
 
 return 0;
}