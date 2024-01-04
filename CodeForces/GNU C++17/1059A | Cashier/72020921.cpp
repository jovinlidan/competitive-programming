#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 lli n, L, a, t, l, total = 0, lastMin = 0, ans = 0;
 cin >> n >> L >> a;
 for(int i = 0; i < n; i++)
 {
  cin >> t >> l;
  lli temp = max(0LL, t-total);
  ans += (temp/a);
  total += l + temp;
 }
 
 ans += (L - total)/a;
 cout << ans << endl;
 
 
 
 
 
 
 
 
 
 return 0;
}