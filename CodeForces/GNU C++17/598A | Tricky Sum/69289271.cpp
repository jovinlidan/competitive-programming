#include <bits/stdc++.h>
#define lli long long int
#define pb(x) push_back(x)
 
using namespace std;
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 lli tc;
 cin >> tc;
 while(tc--)
 {
  lli x, total =0;
  cin >> x;
  total = x*((1+x)/2.0);
  lli n = 1;
  while(n <= x)
  {
   total -= (n*2);
   n*=2;
  }
  cout << total << endl;
 }
 
 
 
 
 return 0;
}