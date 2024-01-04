#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli fDp[100005] = {}, sDp[100005] ={};
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 lli n, total=0;
 cin >> n;
 lli arr[100005] = {};
 for(lli i =1; i <= n; i++)
 {
  cin >> arr[i];
  total+= arr[i];
  fDp[i] = total;
 
 }
 sort(arr, arr+n+1);
 total = 0;
 for(lli i =1 ; i <= n; i++)
 {
  total+= arr[i];
  sDp[i] = total;
 }
 lli tc;
 cin >> tc;
 while(tc--)
 {
  lli tipe, l, r;
  cin>> tipe >> l >> r;
  if(tipe == 1)
  {
   cout << fDp[r] - fDp[l-1] << endl;
  }
  else
  {
   cout << sDp[r] - sDp[l-1] << endl;
  }
 }
 
 
 
 
 
 
 
 return 0;
}