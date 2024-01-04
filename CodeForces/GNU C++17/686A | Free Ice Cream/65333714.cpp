#include <bits/stdc++.h>
using namespace std;
int main() {
 long long int i, n, xIce,totalDis=0, left=0;
 char sign;
 
 cin >> n >> xIce;
 left = xIce;
 for (i = 0; i < n; i++)
 {
  cin >> sign >> xIce;
  if (sign == '+') {
   left += xIce;
  }
  else {
   if (left >= xIce) {
    left -= xIce;
   }
   else {
    totalDis++;
   }
  }
 }
 cout << left << " " << totalDis << endl;
 
 
 return 0;
}