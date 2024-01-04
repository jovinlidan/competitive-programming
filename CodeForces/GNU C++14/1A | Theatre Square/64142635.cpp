#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 long long  int n, m, a,hasil;
 cin >> n >> m >> a;
 long long int countHorizontal = 0;
 long long int countVertical = 0;
 
 countHorizontal = n / a;
 if (n % a != 0) {
  countHorizontal += 1;
 }
 countVertical = m / a;
 if (m % a != 0) {
  countVertical += 1;
 }
 hasil = countHorizontal * countVertical;
 cout << hasil << endl;
 
 
 
 return 0;
}