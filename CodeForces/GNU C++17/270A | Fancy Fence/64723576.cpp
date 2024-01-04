#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 int n;
 int angles[181];
 int i;
 cin >> n;
 for (i = 0; i < n; i++)
 {
  cin >> angles[i];
 }
 
 for (i = 0; i < n; i++)
 {
  if (360 % (180 - angles[i]) == 0) {
   cout << "YES\n";
  }
  else {
   cout << "NO\n";
  }
 }
 
 
 
 
 
 
 
 
 return 0;
}