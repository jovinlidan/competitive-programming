#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, ans = -1, temp, idx = 0, cnt = 0;
    bool sign[105] = {false};
    cin >> n >> m;
    queue<int> arr;
    int mx = INT_MIN;
    for(int i = 0; i < n; i++)
 {
  cin >> temp;
  arr.push(temp);
 }
 while(!arr.empty())
 {
  //cout << arr.front() << endl;
  int nilai = arr.front();
  arr.pop();
  nilai -= m;
  if(nilai > 0)
  {
   arr.push(nilai);
  }
  else
  {
   sign[idx] = true;
   cnt++;
  }
  if(cnt == n) break;
  do{
   idx = (idx+1) % (n);
  }while(sign[idx]);
 
 }
 cout << idx+1 << endl;
 
 
 
 
 return 0;
}