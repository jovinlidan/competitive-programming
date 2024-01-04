#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 int length, i, counts=0, idx=0, hasil = 0;
 string word;
 int deret[105] = {};
 cin >> length >> word;
 
 for (i = 0; i < length; i++)
 {
  if (word[i] == 'B') {
   counts++;
  }
  else if (word[i] != 'B') {
   deret[idx] = counts;
   idx++;
   counts = 0;
  }
  if ((i == length - 1) && (word[i] == 'B')) {
   deret[idx] = counts;
   idx++;
   counts = 0;
  }
 }
 
 for (i = 0; i < idx; i++)
 {
  if (deret[i] != 0) {
   hasil++;
  }
  
 }
 cout << hasil << endl;
 for (i = 0; i < idx; i++)
 {
  if (deret[i] != 0) {
   cout << deret[i] << " ";
  }
 
 }
 cout << '\n';
 
 
 return 0;
}