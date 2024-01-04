#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 lli b, k, arr[100005] = {}, ans=0;
 cin>> b >> k;
 lli bMod = b%10;
 for(lli i = 0; i < k; i++)
 {
  cin >> arr[i];
  if(i == k-1) ans += arr[i];
  else ans += (bMod * (arr[i] % 10));
 }
 if(ans % 2 ==0) cout << "even\n";
 else cout << "odd\n";
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}