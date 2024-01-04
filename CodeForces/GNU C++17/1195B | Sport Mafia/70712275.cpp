#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 lli n, k, boxed= 0, t = 0;
 cin >> n >> k;
 
 while(1)
 {
  if(boxed - k == n)
  {
   cout << n << endl;
   return 0;
 
  }
  boxed+= 1+t;
  t++;
  n--;
 
 }
 //smpe total dibox - hasil akhir = sisa movee
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}