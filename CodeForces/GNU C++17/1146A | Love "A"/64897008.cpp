#include <bits/stdc++.h>
using namespace std;
 
int main() {
 string word;
 int i, aCounts=0, total=0;
 cin >> word;
 
 for (i = 0; i < word.length(); i++)
 {
  if (word[i] == 'a') {
   aCounts++;
  }
 }
 
 if (aCounts < (word.length() - aCounts)) {
  total += word.length() - ((word.length() - aCounts) - aCounts + 1);
 }
 else if (aCounts == (word.length() - aCounts)) {
  total += word.length() - 1;
 }
 else {
  total = word.length();
 }
 /*else if (aCounts >= (word.length() - aCounts)) {
 
 
 }*/
 
 cout << total << endl;
 
 return 0;
}