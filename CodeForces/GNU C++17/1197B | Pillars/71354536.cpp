#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n;
 cin >> n;
 int arr[n+5] = {}, midIdx = -1, needNum = 0;
 for(int i = 1; i <= n; i++)
 {
  cin >> arr[i];
  if(arr[i] == n) midIdx = i;
 
 }
 bool valid = true;
 needNum = arr[midIdx];
 int left =  midIdx, right = midIdx;
 while(1)
 {
  if(needNum == 0)break;
  if(arr[left-1] == needNum-1)
  {
   left--;
   needNum--;
  }
  else if(arr[right+1] == needNum-1)
  {
   right++;
   needNum--;
  }
  else
  {
   valid = false;
   break;
  }
 }
 if(valid) cout << "YES\n";
 else cout << "NO\n";
 
 
 
 
 
 
 
 
 
 return 0;
}