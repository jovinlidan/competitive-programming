#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
int main()
{
 lli n;
 cin >> n;
 lli ans = 1;
 lli temp = sqrt(n);
 for(lli i = 2; i <= temp; i++)
 {
  if(n % i == 0)ans *= i;
  while(n % i == 0) n /= i;
 
 }
 //cout << n << endl;
 
 cout << ans*n << endl;
 
 return 0;
}