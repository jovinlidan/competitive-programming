#include <bits/stdc++.h>
using namespace std;
int main() {
 
 int a, b, i;
 cin >> a >> b;
 
 int awal=0, tgh=0, akhir=0;
 
 for (i = 1; i <= 6; i++)
 {
  if (abs(a - i) < abs(b - i)) {
   awal++;
  }
  else if (abs(a - i) > abs(b - i)) {
   akhir++;
  }
  else if (abs(a - i) == abs(b - i)) {
   tgh++;
  }
 }
 cout << awal << " " << tgh << " " << akhir << endl;
 
 
}