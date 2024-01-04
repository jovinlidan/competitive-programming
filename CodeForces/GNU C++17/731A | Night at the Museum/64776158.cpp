#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 
 string alphabet = "=abcdefghijklmnopqrstuvwxyz";
 int i, j, counts = 0, curIdx = 1, tgh;
 string word;
 cin >> word;
 
 for (i = 0; i < word.length(); i++)
 {
  for (j = 1; j  <= alphabet.length(); j ++)
  {
   if (word[i] == alphabet[j]) {
    if (j > 26/2) {
     tgh = 26;
    }
    else {
     tgh = -26;
    }
 
    if (abs(j - curIdx) > abs((tgh + curIdx) - j)) {
     counts += abs((tgh + curIdx) - j);
     
     //cout << "INI " << alphabet[j] << " " << abs(tgh + curIdx)-j << "INI J" << j << endl;
     curIdx = j;
    }
    else {
     counts += abs(j - curIdx);
     
     //cout << "INI2 " << alphabet[j] << " " << abs(j - curIdx) << endl;
     curIdx = j;
    }
   }
  }
 }
 
 cout << counts << endl;
 
 
 
 
 
 
 
 return 0;
}