#include <bits/stdc++.h>
using namespace std;
 
int main() {
 string word;
 int i, j, countCapital = 0;
 cin >> word;
 for (i = 0; i < word.length(); i++)
 {
  if (((int)word[i] >= 65) && ((int)word[i] <= 90)) {
   countCapital++;
  }
 }
 
 if (countCapital > (word.length() - countCapital)) {
  //UBAH SEMUA KEHURUF BESAR
  for (i = 0; i < word.length(); i++)
  {
   if (((int)word[i] >= 97) && ((int)word[i] <= 122)) {
    word[i] = char((int)word[i] - 32);
   }
  }
 }
 else {
  //UBAH KEHURUF KECIL
  for (i = 0; i < word.length(); i++)
  {
   if (((int)word[i] >= 65) && ((int)word[i] <= 90)) {
    word[i] = char((int)word[i] + 32);
   }
  }
 }
 cout << word << endl;
 
 
 
 return 0;
}