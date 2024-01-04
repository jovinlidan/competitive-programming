#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
lli convert(string s)
{
 stringstream hasil(s);
 lli x= 0;
 hasil >> x;
 return x;
 
}
 
int main()
{
 lli n, total=0, cnt = 10, sign = 1000000000;
 string nine = "9";
 
 cin >> n;
 while(true)
 {
  //cout << n << "-" << sign << "-" << cnt << endl;
  if(n >= sign)
  {
   total += (abs(sign - n) + 1) * cnt;
   n -=(abs(sign - n) + 1);
  }
  else if(n <= 0) break;
  cnt--;
  sign/=10;
 
 
 }
 
 cout << total << endl;
 
 
 
 
 
 return 0;
}