#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int red, blue, differentC = 0, sameC = 0, min = 1e3;
 
 cin >> red >> blue;
 
 if (red < blue) {
  differentC = red;
  blue -= red;
  sameC = int(blue / 2);
 }
 else if (red > blue) {
  differentC = blue;
  red -= blue;
  sameC = int(red / 2);
 }
 else
  differentC = blue;
 
 cout << differentC << " " << sameC << endl;
 
 
 
 
 
 
 
 
 
 
 return 0;
}