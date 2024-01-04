#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n, left=0, right=9;
 bool arr[10] = {false};
 char s;
 cin >> n;
 for(int i = 0; i< n; i++)
 {
  cin >> s;
  bool found = false;
  if(s == 'L')
  {
   for(int j = 0; j <= 9 && !found; j++)
   {
    if(arr[j] == false)
    {
     //cout << j << i << endl;
     arr[j] = true;
     found  =true;
    }
   }
  }
  else if(s == 'R')
  {
   //cout << "YES\n";
   for(int j = 9; j >= 0 && !found; j--)
   {
    if(arr[j] == false)
    {
     arr[j] = true;
     found  =true;
    }
   }
  }
  else
  {
   int temp = int(s-48);
   //cout << temp << endl;
   arr[temp] = false;
  }
 
 }
 for(int i =0; i <= 9; i++)
 {
  cout << arr[i];
 }
 cout << endl;
 
 
 
 
 
 return 0;
}