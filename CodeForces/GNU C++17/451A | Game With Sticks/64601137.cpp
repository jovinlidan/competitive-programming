#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 int hor, ver, counts= 1;
 cin >> hor >> ver;
 string turn[2] = {"Akshat", "Malvika"};
 
 
 while (hor > 0 && ver > 0) {
 
  hor--;
  ver--;
 
 
  counts*=-1;
 
 }
 if (counts == -1) {
  cout << turn[0] << endl;
 }
 else {
  cout << turn[1] << endl;
 }
 
 //cout << turn[counts];
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}