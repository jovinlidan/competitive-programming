/*
 JANGANNNNNNNNNNNNNNNNNNNN TENGOKKKKKKKKKKKKKKKKKKK TENGOKKKKKKKKKKKKKKKKKK
  WOIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII
  CLOSE ITU!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  MALING!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
#include <bits/stdc++.h>
using namespace std;
int main() {
 int w1, h1, w2, h2, i, counts = 0, totalTinggi, totalLebar, hasil;
 cin >> w1 >> h1 >> w2 >> h2;
 totalTinggi = (h1 + h2) * 2;
 
 totalLebar = max(w1, w2) * 2;
 hasil = totalTinggi + totalLebar + 4;
 cout << hasil << endl;
 return 0;
}