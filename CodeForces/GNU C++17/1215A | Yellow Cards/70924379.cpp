#include <bits/stdc++.h>
using namespace std;
int main()
{
 int a, b, k1, k2, n;
 cin >> a >> b >> k1 >> k2 >> n;
 int mn=0, mx=0;
 
 int temp = a*(k1-1)+b*(k2-1);
 if(n > temp) mn = n-temp;
 else mn = 0;
 
 if(k1 <= k2)
 {
  temp = min(a, n / k1);
  mx += temp;
  n -= (temp * k1);
 
  temp = min(b, n / k2);
  mx += temp;
  n -= (temp * k2);
 }
 else
 {
  temp = min(b, n / k2);
  mx += temp;
  n -= (temp * k2);
 
  temp = min(a, n / k1);
  mx += temp;
  n -= (temp * k1);
 }
 cout << mn << " " << mx << endl;
 
 
 
 
 
 
 
 
 
 
 return 0;
}