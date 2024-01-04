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
  long long int ans = (k-1)/(n-1);
  cout << k + ans << '\n';
 }
 
}