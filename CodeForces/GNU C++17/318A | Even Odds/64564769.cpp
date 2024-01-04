#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 long long int bykNomor, nomorKe;
 long long int hasil = 0;
 cin >> bykNomor >> nomorKe;
 
 
 if (bykNomor % 2 != 0) {
  if (nomorKe <= ((bykNomor / 2) + 1)) {
   hasil = 2 * nomorKe - 1; // GANJIL
   //cout << "1\n";
   }
  else {
   hasil = 2 * (nomorKe - ((bykNomor / 2) + 1)); // GENAP
   //cout << "2\n";
   //cout << (nomorKe - (bykNomor / 2) + 1);
   
 
  }
 }
 else {
  if (nomorKe <= (bykNomor / 2)) {
   hasil = 2 * nomorKe - 1; // GANJIL
   //cout << "3\n";
  }
  else {
   hasil = 2 * (nomorKe - (bykNomor / 2)); // GENAP
   //cout << "4\n";
   
 
  }
 
 }
  
 
 
 cout << hasil << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}