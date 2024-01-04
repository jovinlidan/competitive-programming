#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 int row, col, i, j, min = -1;
 char snake = '#', dot = '.';
 cin >> col >> row;
 
 for (i = 0; i < col/2; i++)
 {
  for (j = 0; j < row; j++)
  {
   //SNAKE
   cout << snake;
 
  }
  cout << endl;
  if (min == -1) {
   for (j = 0; j < row - 1; j++)
   {
    //DOT
    cout << dot;
   }
   cout << snake;
   cout << endl;
 
  }
  else {
   cout << snake;
   for (j = 0; j < row - 1; j++)
   {
    //DOT
    cout << dot;
   }
   
   cout << endl;
  }
  min *= -1;
 }
 for (j = 0; j < row; j++)
 {
  //SNAKE
  cout << snake;
 
 }
 cout << endl;
 
 
 
 
 
 return 0;
}