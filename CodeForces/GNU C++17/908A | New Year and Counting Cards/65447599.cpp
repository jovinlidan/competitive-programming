#include <bits/stdc++.h>
using namespace std;
int main() {
 
 string card;
 int i,length, counts = 0;
 
 cin >> card;
 length = card.length();
 for (i = 0; i < length; i++)
 {
  if (card[i] == 'a' || card[i] == 'e' || card[i] == 'i' || card[i] == 'o' || card[i] == 'u') {
   counts++;
  }
  else if (int(card[i]) <= 57) {
   if ((int(card[i]) - 48) % 2 == 1) {
    //cout << (int(card[i]) - 48) << card[i] << endl;
    counts++;
   }
  }
  
 }
 cout << counts << endl;
 
 return 0;
}