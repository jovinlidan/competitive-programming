#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int shovelPrice, coinValue, i, counts=1, hasil=0;
 cin >> shovelPrice >> coinValue;
 
 while (true) {
 
  hasil = counts * shovelPrice;
 
  if (((hasil - coinValue) % 10 == 0) || (hasil % 10 == 0)) {
   break;
  }
 
  counts++;
 }
 
 cout << counts << endl;
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}