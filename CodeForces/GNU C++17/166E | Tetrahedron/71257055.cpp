#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli arr[10000002] = {};
 
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 arr[1] = 0;
 int n;
 cin >> n;
 const int mod = 1000000007;
 
 for(int i = 2; i <= n; i++)
 {
  if(i % 2 == 0) arr[i] = (arr[i-1] * 3 + 3) % mod;
  else arr[i] = (arr[i-1] * 3 - 3) % mod;
 }
 cout << arr[n] << endl;
 
 
 
 
 
 
}