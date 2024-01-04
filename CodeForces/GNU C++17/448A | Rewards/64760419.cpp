#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int c1, c2, c3, m1, m2, m3, counts, shelf, hasilC=0, hasilM=0;
 cin >> c1 >> c2 >> c3;
 cin >> m1 >> m2 >> m3;
 cin >> shelf;
 // CUP 5
 // MEDAL 10
 if ((c1 + c2 + c3) % 5 != 0) {
  hasilC = int((c1 + c2 + c3) / 5) + 1;
 }
 else {
  hasilC = int((c1 + c2 + c3) / 5);
 }
 
 if ((m1 + m2 + m3) % 10 != 0) {
  hasilM = int((m1 + m2 + m3) / 10) + 1;
 }
 else {
  hasilM = int((m1 + m2 + m3) / 10);
 }
 
 
 if (hasilM + hasilC <= shelf) {
  cout << "YES\n";
 }
 else
  cout << "NO\n";
 
 
 
 
 
 
 return 0;
}