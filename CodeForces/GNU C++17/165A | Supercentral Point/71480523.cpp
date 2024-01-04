#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, x, y, temp;
 cin >> n;
 vector<pair<int, int>> arr;
 
 for(int i = 0; i < n; i++)
 {
  cin >> x >> y;
  arr.push_back({x, y});
 }
 bool up=false,down=false,right=false, left=false;
 int ans = 0;
 
 for(int i = 0; i < n; i++)
 {
  x = arr[i].first;
  y = arr[i].second;
  for(int j = 0; j < n; j++)
  {
   if(x == arr[j].first)
   {
    if(arr[j].second > y) up = 1;
    if(arr[j].second < y) down = 1;
   }
   if(y == arr[j].second)
   {
    if(arr[j].first > x) right = 1;
    if(arr[j].first < x) left = 1;
   }
   if(up && right && down && left)
   {
    ans++;
    break;
   }
  }
  up = right = down = left = false;
 }
 cout << ans << endl;
 
 
 
 
 
 
 
 
 
 return 0;
}