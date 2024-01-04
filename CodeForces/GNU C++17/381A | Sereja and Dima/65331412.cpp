#include <bits/stdc++.h>
using namespace std;
int main() {
 long long int n, cards[1005], i, p1Score = 0, p2Score = 0, turn = 1;
 cin >> n;
 for (i = 0; i < n; i++)
 {
  cin >> cards[i];
 }
 int atas = n-1;
 int bawah = 0;
 
 while (bawah <= atas) {
  if (atas == bawah) {
   if (turn == 1) {
    p1Score += cards[atas];
 
   }
   else {
    p2Score += cards[atas];
   }
   break;
  }
  if (cards[atas] > cards[bawah]) {
   if (turn == 1) {
    p1Score += cards[atas];
    
   }
   else {
    p2Score += cards[atas];
   }
   atas -= 1;
  }
  else if (cards[atas] < cards[bawah]) {
   if (turn == 1) {
    p1Score += cards[bawah];
 
   }
   else {
    p2Score += cards[bawah];
   }
   bawah += 1;
  }
  
  turn *= -1; 
 
 
 }
 
 cout << p1Score << " " << p2Score << endl;
 return 0;
}