#include <bits/stdc++.h>
using namespace std;
int main() {
 string word;
 cin >> word;
 int length = word.length();
 int i, count=0, j, k;
 
 for (i = 0; i < length; i++)
 {
  for (j = i+1; j < length; j++)
  {
   for (k = j+1; k < length; k++)
   {
    if (word[i] == 'Q' && word[j] == 'A' && word[k] == 'Q') {
     count++;
    }
   }
  }
 }
 cout << count << endl;
 
 
 return 0;
}