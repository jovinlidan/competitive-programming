#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 
 int n1, n2, n3, n4, i, j, totalCal = 0;
 cin >> n1 >> n2 >> n3 >> n4;
 string word;
 cin >> word;
 
 for ( i = 0; i < word.length(); i++)
 {
  int digit = int((int)word[i] - '0');
  if (digit == 1) {
   totalCal += n1;
  }
  else if (digit == 2) {
   totalCal += n2;
  }
  else if (digit == 3) {
   totalCal += n3;
  }
  else if (digit == 4) {
   totalCal += n4;
  }
 }
 
 cout << totalCal << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}