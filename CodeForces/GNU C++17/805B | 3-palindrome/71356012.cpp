#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin >> n;
 bool valid = true;
 int HDiv = ceil(n/2.0);
 
 for(int i = 0; i < n; i++)
 {
  if(i == 0) cout << "b";
  else
  {
   if(valid) cout << "a";
   else cout << "b";
   if(i % 2 == 0) valid = !valid;
  }
 }
 
 
 
 
 
 
 
 
 
 return 0;
}