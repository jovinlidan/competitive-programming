#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
 
 int tc;
 cin >> tc;
 while(tc--)
 {
  int a, b, n, arr[3] = {};
  cin >> a >> b >> n;
  arr[0] = a;
  arr[1] = b;
  arr[2] = (a^b);
  cout << arr[n%3]<<endl;
 
 }
 
 
 
 
 
 
 
 return 0;
}