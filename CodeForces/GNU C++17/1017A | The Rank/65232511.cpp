#include <bits/stdc++.h>
using namespace std;
int main() {
 int nStudents, a, b, c, d, id = 1, rank = 1, i, sum=0;
 cin >> nStudents;
 for (i = 1; i <= nStudents; i++)
 {
  cin >> a >> b >> c >> d;
  if (i == 1) {
   sum = a + b + c + d;
  }
  else {
   if (sum < (a + b + c + d)) {
    rank++;
   }
  }
 }
 
 cout << rank;
 
 
 
 
 
 
 
 return 0;
}