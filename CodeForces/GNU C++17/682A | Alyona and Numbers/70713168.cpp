#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 lli a, b;
 cin >> a >> b;
 lli ans = 0;
 for(int i = 1; i <= a; i++)
 {
  ans += (i+b)/5 - (i/5);
 }
 cout << ans << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}