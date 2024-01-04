#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 const int mod = 1000000007;
 lli x, y, n;
 cin >> x >> y >> n;
 lli arr[6];
 arr[1] = x;
 arr[2] = y;
 arr[3] = arr[2] - arr[1];
 arr[4] = arr[1] * -1;
 arr[5] = arr[2] * -1;
 arr[0] = arr[3] * -1;
 
 cout << (mod + (arr[n%6] % mod)) % mod << endl;
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}