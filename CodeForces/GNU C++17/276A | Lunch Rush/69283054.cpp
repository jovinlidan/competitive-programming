#include <bits/stdc++.h>
#define lli long long int
#define pb(x) push_back(x)
 
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 lli n, k, mx = INT_MIN, a, b;
 cin >> n>> k;
 for(int i = 0 ; i < n; i++)
 {
  cin >> a >> b;
  if(b > k)
  {
   mx = max(mx, a-(b-k));
  }
  else mx = max(mx, a);
 }
 cout << mx << endl;
 
 
 
 
 return 0;
}