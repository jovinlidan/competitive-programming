#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 lli tc;
 cin >> tc;
 while(tc--)
 {
  lli n,temp;
  cin >> n;
  lli arr[4] = {};
  for(lli i =0; i < n; i++)
  {
   cin >> temp;
   arr[temp%3]++;
 
  }
  lli t = min(arr[1], arr[2]);
  arr[1] -= t;
  arr[2] -= t;
  lli TT = arr[1]/3;
  lli TTT = arr[2]/3;
 
  cout << arr[0] + t + TT + TTT << endl;
 
 
 
 
 }
 
 
 
 
 
 
 
 
 
 
 return 0;
}