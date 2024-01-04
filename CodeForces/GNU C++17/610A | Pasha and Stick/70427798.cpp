#include <bits/stdc++.h>
using namespace std;
int main()
{
 
 int n;
 cin >> n;
 if(n >= 6 && n % 2 == 0)
 {
  cout << int(ceil(n*1.0 / 4) - 1) << endl;
 
 }
 else cout << 0 << endl;
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}