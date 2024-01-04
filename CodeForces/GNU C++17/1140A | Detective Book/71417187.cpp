#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[10005] = {},day = 0;
    stack<int> ans;
    cin >> n;
    for(int i = 1; i <= n; i++)
 {
  cin >> arr[i];
 }
 
 for(int i = 1; i <= n; i++)
 {
  ans.push(arr[i]);
  while(!ans.empty())
  {
   int tops = ans.top();
   ans.pop();
   if(tops > i)
   {
                for(int j = i+1; j <= tops; j++)
    {
     if(arr[j] > tops)ans.push(arr[j]);
    }
    i = tops;
   }
  }
  day++;
  //cout << i << endl;
 }
 cout << day << endl;
 
 
 
 
 
 
 
 return 0;
}