#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int n, arr[2005]={}, urut[2005] = {}, pos = 1, lastNum = -1, lastPos = -1;
 cin >> n;
 for(int i = 0; i < n; i++)
 {
  cin >> arr[i];
  urut[i] = arr[i];
 }
 sort(urut, urut+n, greater<int>());
 
 for(int i = 0; i < n; i++)
 {
  for(int j = 0; j < n; j++)
  {
   if(urut[i] == lastNum && urut[i] == arr[j])
   {
 
    arr[j] = -lastPos;
    pos++;
    break;
 
   }
   else if(urut[i] == arr[j])
   {
    arr[j] = -pos;
    lastPos = pos;
    pos++;
    break;
   }
  }
  lastNum = urut[i];
 
 }
 
 for(int i =0; i < n; i++)
 {
  if(i != 0) cout << " ";
  cout << abs(arr[i]);
 }
 cout << endl;
 
 
 
 
 
 return 0;
}