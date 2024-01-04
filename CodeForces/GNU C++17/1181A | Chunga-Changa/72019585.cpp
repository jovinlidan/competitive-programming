#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 lli a, b , z;
 
 cin >> a >> b >> z;
 
 lli mx = (a+b)/ z;
 cout << mx << " ";
 
 lli aa = a / z, bb = b/ z;
 if(aa + bb != mx)
 {
  lli one = a % z, two = b % z;
  //cout << one << " " << two <<endl;
 
  one = z - one;
  two = z - two;
 
   cout << min(one, two);
 
 }
 else cout << 0;
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}