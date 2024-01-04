#include <bits/stdc++.h>
using namespace std;
int main()
{
 long double ans = 0;
 int n;
 cin >> n;
 for(int i = 1; i <= n; i++)
 {
  ans += (1.0/i);
 }
 cout << fixed << setprecision(12) << ans << endl;
 
 
 
 
 
 
 return 0;
}