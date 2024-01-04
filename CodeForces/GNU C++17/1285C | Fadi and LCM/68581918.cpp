#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
lli LCM(lli x,lli y)
{
 return x*(y/__gcd(x,y));
}
 
 
int main()
{
 lli x;
 cin>>x;
 lli a,b;
 for(lli i = sqrt(x) ; i >=1 ; i--)
 {
  if(x % i != 0) continue;
  if (LCM(i,x/i) == x)
  {
   a=i;
   b=x/i;
   break;
  }
 }
 cout<<a<<" "<<b<<endl;
}