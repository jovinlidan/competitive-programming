#include <bits/stdc++.h>
using namespace std;
 
//Compiler version g++ 6.3.0
 
long long int solve(long long int x)
{
  double a = ((1+x)/2.0);
  x = x%100;
  return  a * x;
  
  
  
  
}
 
int main()
{
    long long int x;
    cin >> x;
    cout << solve(x) %2 << endl;
    
    
}