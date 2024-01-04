#include <bits/stdc++.h>
using namespace std;
int main()
{
 int light[10][10] = {}, temp;
 
 for(int i = 1; i <= 3; i++)
 {
  for(int j = 1; j <= 3; j++)
  {
   cin >> temp;
   if(temp % 2 == 1)
   {
    light[i-1][j] = !light[i-1][j];
    light[i][j-1] = !light[i][j-1];
    light[i+1][j] = !light[i+1][j];
    light[i][j+1] = !light[i][j+1];
    light[i][j] = !light[i][j];
   }
  }
 }
 for(int i = 1; i <= 3; i++)
 {
  for(int j =1; j <= 3; j++)
  {
   cout << !light[i][j];
  }
  cout << endl;
 }
 
 
 
 
 
 
 
 
 return 0;
}