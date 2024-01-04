#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int n, m;
  cin >> n >> m;
  int hsl = 0;
  if(n >= 31) hsl = m;
  else{
 hsl = pow(2, n);
 hsl = m % hsl;
  }
  cout << hsl;
  //printf("%d\n", n >= 31 ? m : m % (1 << n));
  return 0;
}