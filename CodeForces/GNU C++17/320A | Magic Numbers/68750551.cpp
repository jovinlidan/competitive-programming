#include <bits/stdc++.h>
using namespace std;
 
bool solve(int x)
{
  if (x == 0) return true;
  
  if (x % 1000 == 144)
  {
    return solve(x/1000);
  }
  else if(x % 100 == 14)
  {
    return solve(x/100);
  }
  else if(x % 10 == 1)
  {
    return solve(x / 10);
  }
  return false;
  
  
  
  
  
}
int main()
{
    int x ;
    cin >> x;
    if(solve(x)) cout << "YES\n";
    else cout << "NO\n";
}