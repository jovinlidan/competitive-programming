#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cout.tie(0);
 cin.tie(0);
 lli l, r;
 cin >> l >> r;
 cout << "YES\n";
 lli half = (r-l+1)/2;
 //cout << half<< endl;
 lli temp = l;
 for(lli i = 0; i < half; i++)
 {
  cout << temp << " " << temp+1 << endl;
  temp+=2;
 }
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}