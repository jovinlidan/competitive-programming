#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int i, n, count[605] = {}, temp, hasil = 0;
 
 cin >> n;
 for (i = 0; i < n; i++)
 {
  cin >> temp;
  if (temp != 0) {
   if (count[temp] == 0) {
    count[temp]++;
    hasil++;
   }
  }
 }
 
 cout << hasil << endl;
 
 
 return 0;
}