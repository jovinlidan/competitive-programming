#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 
 int numEmploy, i, counts =0;
 cin >> numEmploy;
 
 
 
 for (i = 1; i <= numEmploy / 2; i++)
 {
  if (numEmploy % i == 0) {
   counts++;
  }
 }
 
 cout << counts << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}