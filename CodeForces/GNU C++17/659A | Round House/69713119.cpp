#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    if(b > 0)
 {
  a+= b;
 
 }
 else if(b < 0)
 {
  //b %= n;
  b =(n + (b%n)) % n;
  //cout << b << endl;
  a+= b;
 }
 if(abs(a % n) == 0) cout << n << endl;
 else cout << abs(a % n) << endl;
 
 
 
 
 
 
 
 return 0;
}