#include <bits/stdc++.h>
using namespace std;
int main()
{
 
 int cycle[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
 int n, arr[100] = {};
 cin >> n;
 for(int i  = 0 ; i < n; i++)
 {
  cin >> arr[i];
 }
 int aIdx = 0, cIdx = 0, loop = 0;
 int ans = 0;
 bool up=false, down = false;
 bool aktif = false;
 
 while(loop != 31)
 {
  if(aIdx == n)
  {
   if(cycle[cIdx] - cycle[(cIdx-1)%30] > 0) up = true;
   else down = true;
   aIdx = 0;
  }
  if(arr[aIdx] == cycle[cIdx])
  {
   aIdx++;
  }
  else
  {
   loop++;
   aIdx = 0;
  }
 
  cIdx = (cIdx+1) % 30;
 }
 if(up && down) cout << -1 << endl;
 else if(up) cout << "UP" << endl;
 else cout << "DOWN" << endl;
 
 return 0;
}