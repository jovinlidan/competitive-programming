#include <bits/stdc++.h>
#define lli long long int
#define pb(x) push_back(x)
 
using namespace std;
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 lli n, m, teams = 0;
 cin >> n >> m;
 lli mn = min(n, m);
 lli mx = max(n , m);
 if(mn * 2 > mx)
 {
  cout << (n+m)/3 << endl;
 }
 else
 {
  cout << (mn+(mn*2))/3 << endl;
 }
 
 
 
 
 return 0;
}