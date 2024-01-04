#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 
 char direction;
 cin >> direction;
 int i, j, counts, dir=-1;
 string word;
 string abc = "qwertyuiopasdfghjkl;zxcvbnm,./";
 cin >> word;
 if (direction == 'L') {
  dir = 1;
 }
 else {
  dir = -1;
 }
 for (i = 0; i < word.length(); i++)
 {
  for ( j = 0; j < abc.length(); j++)
  {
   if (word[i] == abc[j]) {
    word[i] = abc[j + dir];
    break;
    //cout << word[i];
   }
  }
 }
 cout << word << endl;
 
 
 
 return 0;
}