#include <bits/stdc++.h>
using namespace std;
 
long long int solve(long long int n)
{
 return (n * ((n+1)) /2);
 
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 long long int tc;
 cin >> tc;
 while(tc--)
 {
  long long int n, tck = 1;
  cin >> n;
  long long int ans = 0;
  for(long long int i =  n/2; i >= 1; i--)
  {
   ans += i * i;
  }
  cout << ans*8 << '\n';
 
 }
 
 
}
 