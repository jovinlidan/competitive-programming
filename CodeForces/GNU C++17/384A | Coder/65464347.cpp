#include <bits/stdc++.h>
using namespace std;
int main() {
 long long int n, j, i, hasil = 0;
 char board[1005][1005] = {};
 
 cin >> n;
 if (n % 2 == 0) {
  hasil = (n/2) * n;
 }
 else {
  hasil = ( pow ((n/2)+1, 2)  + (n / 2) * (n / 2));
 }
 
 cout << hasil << endl;
 
 for (i = 0; i < n; i++)
 {
  for (j = 0; j < n; j++)
  {
   if (i == 0 && j == 0) {
    if (board[i + 1][j] != 'C' && board[i][j + 1] != 'C') {
     board[i][j] = 'C';
     cout << board[i][j];
    }
    else {
     board[i][j] = '.';
     cout << board[i][j];
    }
   }
   else if (i == 0 && j != 0) {
    if (board[i + 1][j] != 'C' && board[i][j + 1] != 'C' && board[i][j - 1] != 'C') {
     board[i][j] = 'C';
     cout << board[i][j];
    }
    else {
     board[i][j] = '.';
     cout << board[i][j];
    }
   }
   else if (i != 0 && j == 0) {
    if (board[i + 1][j] != 'C' && board[i][j + 1] != 'C' && board[i-1][j] != 'C') {
     board[i][j] = 'C';
     cout << board[i][j];
    }
    else {
     board[i][j] = '.';
     cout << board[i][j];
    }
   }
   else {
    if (board[i + 1][j] != 'C' && board[i][j + 1] != 'C' && board[i - 1][j] != 'C' && board[i][j - 1] != 'C') {
     board[i][j] = 'C';
     cout << board[i][j];
    }
    else {
     board[i][j] = '.';
     cout << board[i][j];
    }
   }
  }
  cout << endl;
 }
 
 
 return 0;
}