#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int angka, i;
 cin >> angka;
 
 string strAngka;
 stringstream sAngka;
 sAngka << angka;
 sAngka >> strAngka;
 bool isLucky = true;
 if ((angka % 4 == 0) || (angka % 7 == 0) || (angka % 47 == 0) || (angka % 74 == 0)) {
  isLucky = true;
 }
 else {
 
  for (i = 0; i < strAngka.length(); i++)
  {
   if ((((int)strAngka[i] -'0') == 7) || ((int)strAngka[i] - '0') == 4) {
    continue;
   }
   else {
    isLucky = false;
   }
  }
 
 }
 if (isLucky)
  cout << "YES" << endl;
 else
  cout << "NO" << endl;
 
 
 
 
 
 
 return 0;
}