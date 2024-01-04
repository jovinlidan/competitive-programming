#include <bits/stdc++.h>
using namespace std;
 
bool counterClockwise(int n, deque<int> arr, int mx )
{
 int last = INT_MAX;
 int temp;
 for(int i = 0; i < n; i++)
 {
  temp = arr.front();
  if(temp != mx)
  {
   arr.pop_front();
   arr.push_back(temp);
  }
 }
 
 bool isYes = true;
 for(int i = 0; i < n; i++)
 {
  temp = arr.front();
  //cout << temp << "-";
  arr.pop_front();
  if(last < temp)isYes = false;
  last = temp;
 }
 return isYes;
 
 
 
}
 
bool clockwise(int n, deque<int> arr, int mx )
{
 int last = INT_MIN;
 int temp;
 for(int i = 0; i < n; i++)
 {
  temp = arr.front();
  if(temp != mx)
  {
   arr.pop_front();
   arr.push_back(temp);
  }
  else
  {
   arr.pop_front();
   arr.push_back(temp);
   break;
  }
 }
 
 bool isYes = true;
 for(int i = 0; i < n; i++)
 {
  temp = arr.front();
  //cout << temp << "-";
  arr.pop_front();
  if(last > temp)isYes = false;
  last = temp;
 }
 return isYes;
 
 
 
}
 
int main()
{
 int tc;
 cin >> tc;
 while(tc--)
 {
  int n, temp, mx = INT_MIN;
  cin >> n;
  deque<int> arr;
  for(int i = 0; i < n; i++)
  {
   cin >> temp;
   mx = max(mx, temp);
   arr.push_back(temp);
  }
 
 
  if(clockwise(n, arr, mx) || counterClockwise(n, arr, mx)) cout << "YES\n";
  else cout << "NO\n";
 
 
 
 
 
 
 }
 
 
 
 
 
 
 return 0;
}