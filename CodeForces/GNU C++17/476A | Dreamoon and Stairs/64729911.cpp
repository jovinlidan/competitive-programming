#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int stairLength, multiM, i, counts=0, currentStep =0, multiplier = 1, divide, hasil=0, patokan;
 cin >> stairLength >> multiM;
 if (stairLength % 2 == 0) {
  patokan = int(stairLength / 2);
 }
 else {
  patokan = int(stairLength / 2)+1;
 }
 
 
 if (stairLength >= multiM) {
  while (true) {
 
   divide = multiM * multiplier;
   if ((patokan <= divide) && (divide - patokan < multiM)) {
    break;
   }
 
 
   multiplier++;
  }
 }
 else {
  divide = -1;
 }
 
 
 cout << divide << endl;
 
 
 
 
 return 0;
}