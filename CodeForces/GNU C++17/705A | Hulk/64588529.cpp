#include <bits/stdc++.h>
 
 
using namespace std;
 
 
int main() {
 int n, i, counts;
 string hate = "I hate", love = "I love", that = " that ";
 cin >> n;
 counts = n;
 for (i = 1; i <= n; i++)
 {
  if (i % 2 == 1) {
   cout << hate;
  }
  else {
   cout << love;
  }
 
  if (counts > 1) {
   cout << that;
   counts--;
  }
 }
 cout << " it";
 cout << endl;
 
 
 return 0;
}