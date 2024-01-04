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
  long long int n, k;
  cin >> n >> k;
 
  if(n % 2 == 0 && k % 2 == 0)
  {
   if(ceil(n/2.0) >= k && (k*k <= n))cout << "YES\n";
   else cout << "NO\n";
  }
  else if(n % 2 == 1 && k % 2 == 1)
  {
   if(ceil(n/2.0) >= k && (k*k <= n))cout << "YES\n";
   else cout << "NO\n";
  }
  else cout << "NO\n";
 
 }
 
}