#include <bits/stdc++.h>
using namespace std;
 
string convert(int n)
{
 stringstream hasil;
 hasil << n;
 return hasil.str();
}
unordered_map<string, bool> sign;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
    int n, k, cnt = 0;
    cin >> n >> k;
    int temp;
    deque<int> arr;
    for(int i =0; i < n; i++)
 {
  cin >> temp;
  string emp = convert(temp);
  if(cnt < k)
  {
   if(sign[emp] == false)
   {
    arr.push_front(temp);
    sign[emp] = true;
    cnt++;
   }
  }
  else
  {
   if(sign[emp] == false)
   {
    sign[convert(arr.back())] = false;
    arr.pop_back();
    arr.push_front(temp);
    sign[emp] = true;
    cnt++;
   }
 
  }
 }
 int length = arr.size();
 cout << length << endl;
 for(int i = 0; i < length; i++)
 {
  if(i != 0) cout << " ";
  cout << arr.front();
  arr.pop_front();
 }
 cout << endl;
 
 
 
 
 
 
 return 0;
}