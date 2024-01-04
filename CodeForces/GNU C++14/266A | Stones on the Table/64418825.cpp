#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int  i, j, countB = 0, countR=0, countG=0, n;
 string stones;
 cin >> n;
 cin >> stones;
 
 
 
 for (i = 0; i < stones.length(); i++)
 {
  for (j = i+1; j < stones.length(); j++)
  {
   if ((stones[i] == stones[j]) && (j-1 == i) ){
    if (stones[i] == 'R') {
     countR++;
    }
   }
   if ((stones[i] == stones[j]) && (j - 1 == i)) {
    if (stones[i] == 'G') {
     countG++;
    }
   }
   if ((stones[i] == stones[j]) && (j - 1 == i)) {
    if (stones[i] == 'B') {
     countB++;
    }
   }
  }
 }
 
 cout << countR + countB + countG << endl;
 
 
 
 return 0;
}