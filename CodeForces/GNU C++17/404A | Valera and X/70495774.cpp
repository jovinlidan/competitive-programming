#include <bits/stdc++.h>
using namespace std;
int main()
{
 char arr[305][305] = {};
 int n, lB, rB, lT, rT;
 set<char> diag, lurus;
 bool next = true;
 cin >> n;
 lB = 0;
 rB = 0;
 lT = 0;
 rT = n-1;
 for(int i = 0; i < n; i++)
 {
  for(int j = 0; j < n; j++)
  {
   cin >> arr[i][j];
   next = false;
   //cout << lB << " " << rB << endl;
   if(i == lB && j == rB)
   {
    diag.insert(arr[i][j]);
    lB+=1;
    rB+=1;
    next = true;
   }
   if(i == lT && j == rT)
   {
    diag.insert(arr[i][j]);
    lT++;
    rT--;
    next = true;
   }
   if(!next)
   {
    lurus.insert(arr[i][j]);
    //cout << arr[i][j] << i << '-' << j << endl;
 
   }
 
  }
 }
 auto first = diag.begin();
 auto second = lurus.begin();
 //cout << diag.size() << '-' << lurus.size() << endl;
 if(diag.size() == 1 && lurus.size() == 1 &&(*first != *second) )cout << "YES\n";
 else cout << "NO\n";
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}