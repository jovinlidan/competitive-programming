#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 lli n, l , r;
 cin >> n >> l >> r;
 lli total2= 0;
 
 lli left, right;
 
 for(lli i = 0; i < l; i++)
 {
  total2 += pow(2, i);
 }
 left = total2 + (n-l);
 lli totalR = 0;
 for(lli i = 0; i < r; i++)
 {
  totalR += pow(2, i);
 }
 right = totalR + ((n-r) *  pow(2, r-1));
 cout << left << " " << right << endl;
 
 
 
 
 
 
 
 
 return 0;
}