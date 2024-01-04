#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, arr[105] = {};
 cin >> n;
 vector<int> set1, set2, set3;
 
 
 for(int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 sort(arr, arr+n);
 for(int i = 0; i < n; i++)
 {
  if(arr[i] < 0 && set1.size() == 0)
  {
   set1.push_back(arr[i]);
   continue;
  }
  if(arr[i] < 0 && arr[i+1] < 0 && set2.size() == 0)
  {
   set2.push_back(arr[i]);
   set2.push_back(arr[i+1]);
   i+=1;
   continue;
  }
  if(arr[i] == 0)
  {
   set3.push_back(arr[i]);
   continue;
  }
  if(arr[i] > 0 && set2.size() == 0)
  {
   set2.push_back(arr[i]);
   continue;
  }
  set3.push_back(arr[i]);
 
 }
 cout << set1.size();
 for(int i = 0; i < set1.size(); i++)
 {
  cout << " ";
  cout << set1[i];
 }
 cout << endl;
 
 cout << set2.size();
 for(int i = 0; i < set2.size(); i++)
 {
  cout << " ";
  cout << set2[i];
 }
 cout << endl;
 
 cout << set3.size();
 for(int i = 0; i < set3.size(); i++)
 {
  cout << " ";
  cout << set3[i];
 }
 cout << endl;
 
 
 
 
 
 
 
 return 0;
}