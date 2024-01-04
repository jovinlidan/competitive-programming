#include <bits/stdc++.h>
using namespace std;
int main() {
 
 int a, b, c, i, n;
 cin >> n;
 a = n / 3;
 b = n / 3;
 c = n / 3 + n % 3;
 while (a % 3 == 0 || b % 3 == 0 || c % 3 == 0) {
  if (a > 1 && a % 3 == 0) {
   a--;
   b++;
 
  }
  else if(b > 1 && b % 3 == 0) {
   b--;
   c++;
 
  }
  else if (c > 2 && c % 3 == 0) {
   c-=2;
   a+=2;
 
  }
 }
 cout << a << " " << b << " " << c << endl;
 
 
 
 
 return 0;
}