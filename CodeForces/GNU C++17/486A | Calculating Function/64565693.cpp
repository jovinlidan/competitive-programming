#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 long long int n, min = -1, i, hasil = 0;
 cin >> n;
 if (n % 2 == 0) {
  hasil = n / 2;
 }
 else {
  hasil = ((n / 2) + 1) * -1;
 }
 
 cout << hasil << endl;
 
 
 
 
 
 return 0;
}