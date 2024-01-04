#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, arr[135] = {};
 vector <int> first, second;
 unordered_map<int , bool> sign1, sign2;
 
 cin >> n;
 for(int i = 0; i < n; i++)
 {
  cin >> arr[i];
 
 }
 sort(arr, arr+n);
 int mx = arr[n-1];
 for(int i = n-1; i>=0; i--)
 {
  if(mx % arr[i] == 0 && !sign1[arr[i]])
  {
   sign1[arr[i]] = true;
   first.push_back(arr[i]);
   arr[i] = 1;
  }
 }
 //sort(arr, arr+n);
 int mn = 2;
 while(true && n-mn >=0)
 {
  sign2.clear();
  second.clear();
  int temp = arr[n-mn];
  for(int i = n-mn; i >=0 ; i--)
  {
   if(temp % arr[i] == 0)
   {
    if(!sign2[arr[i]])
    {
     sign2[arr[i]] = true;
     second.push_back(arr[i]);
 
    }
 
   }
  }
  if(second.size() + first.size() == n)
  {
   cout << mx << " " << arr[n-mn] << endl;
//   for(auto i : first) cout << i << " ";
//   cout << endl;
//   for(auto i : second) cout << i << " ";
 
   return 0;
  }
  mn++;
 
 }
 //cout << mx << " " << arr[n-2] << endl;
 
 
 
 
 
 return 0;
}