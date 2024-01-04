#include <bits/stdc++.h>
using namespace std;
int main() {
 long long int a, b, c, total=0;
 cin >> a >> b >> c;
 
 
 if (abs(a - b) > 1) {
  total = (2 * c) + min(a, b) + min(a, b) + 1;
 }
 else {
  total = (2 * c) + a + b;
 }
 cout << total << endl;
 return 0;
}