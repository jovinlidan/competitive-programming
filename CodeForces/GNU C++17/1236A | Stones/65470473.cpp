#include <bits/stdc++.h>
using namespace std;
int main() {
 int q, i, counts = 0,a , b, c;
 
 cin >> q;
 for (i = 0; i < q; i++)
 {
  cin >> a >> b >> c;
  counts = 0;
  int mins = min(b, c / 2);
  b -= mins;
  c -= mins;
  counts += mins * 2 + mins;
  mins = min(a, b / 2);
  a -= mins;
  b -= mins;
  counts += mins * 2 + mins;
  cout << counts << endl;
 }
 return 0;
}