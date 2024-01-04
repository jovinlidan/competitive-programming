#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 int n, d, total=0, temp;
 cin >> n>> d;
 for(int i = 0; i < n ;i++)
 {
  cin >> temp;
  total += temp;
 }
 // << total << endl;
 d -= total;
 
 
 if( (d - (10 *(n-1))) < 0) cout << -1 << endl;
 else
 {
  cout << d/ 5 << endl;
 }
 
 
 
 return 0;
 
}