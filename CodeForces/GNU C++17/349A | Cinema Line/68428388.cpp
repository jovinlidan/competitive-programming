#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n;
 queue<int> arr;
 unordered_map<int, int > money;
 bool isAble = true;
 cin >> n;
 
 for(int i = 1; i <= n; i++)
 {
  int temp;
  cin >> temp;
  arr.push(temp);
  money[temp]++;
 
  if(temp == 50)
  {
   if(money[25] >= 1)
   {
    money[25]--;
 
   }else
   {
    isAble = false;
   }
  }
  else if(temp == 100)
  {
   if(money[25] >= 1 && money[50] >= 1)
   {
    money[25] -= 1;
    money[50] -= 1;
   }
   else if(money[25] >= 3)
   {
    money[25] -= 3;
   }
   else
   {
    isAble = false;
   }
  }
 
 }
 
 cout << ( isAble? "YES\n" : "NO\n");
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}