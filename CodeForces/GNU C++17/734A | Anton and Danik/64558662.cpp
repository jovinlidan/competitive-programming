#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 
 int n, i, countAnton=0, setengah=0, countDanik=0;
 string whoWon;
 
 cin >> n >> whoWon;
 
 for (i = 0; i < n; i++)
 {
  if (whoWon[i] == 'A') {
   countAnton++;
  }
  else {
   countDanik++;
  }
 }
 
 
 setengah = n / 2;
 
 
 if (countAnton > setengah) {
  cout << "Anton" << endl;
 
 }
 else if (countDanik > setengah) {
  cout << "Danik" << endl;
 }
 else {
  cout << "Friendship" << endl;
 }
 
 
 
 return 0;
}