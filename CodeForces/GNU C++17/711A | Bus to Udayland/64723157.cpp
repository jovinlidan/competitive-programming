#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 int row, i, j, idxi = -1, idxj = -1;
 int col = 5;
 char seat[1000][5], prevSeat = '-';
 bool isSit = false;
 cin >> row;
 for (i = 0; i < row; i++)
 {
  for (j = 0; j < col; j++)
  {
   cin >> seat[i][j];
   if ((seat[i][j] == prevSeat) && (seat[i][j] == 'O') && ((j == 1) || (j == 4)) && (isSit == false)) {
    isSit = true;
    idxi = i;
    idxj = j;
   }
   prevSeat = seat[i][j];
  }
 }
 if (isSit) {
  cout << "YES\n";
  for (i = 0; i < row; i++)
  {
   for (j = 0; j < col; j++)
   {
    if (((i == idxi) && (j == idxj - 1)) || ((i == idxi) && (j == idxj))) {
     cout << "+";
    }
    else {
     cout << seat[i][j];
    }
   }
   cout << endl;
  }
 }
 else {
  cout << "NO\n";
 }
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}