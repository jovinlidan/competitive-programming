#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 long long int task, i, a, b, k, total=0, j;
 cin >> task;
 
 for ( j = 0; j < task; j++)
 {
  total = 0;
  cin >> a >> b >> k;
  if (k % 2 == 0) {
   total += (a * (k / 2)) + (-b * (k / 2));
  }
  else {
   int genap = (k - 1) / 2;
   int ganjil = (k - genap);
   total += (a * ganjil) + (-b * genap);
  }
  cout << total << endl;
 }
 
 
 
 
 
 
 
 
 
 return 0;
}