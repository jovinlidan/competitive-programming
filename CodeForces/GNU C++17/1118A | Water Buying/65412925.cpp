#include <bits/stdc++.h>
using namespace std;
int main() {
 
 long long int n, a, b, i, total=0, q;
 cin >> q;
 
 for (i = 0; i < q; i++)
 {
  cin >> n >> a >> b;
  total = 0;
  if (a <= b / 2) {
   cout << n * a << endl;
  }
  else {
   total += (n / 2) * b;
   total += (n % 2) * a;
   cout << total << endl;
  }
 }
 
 
}