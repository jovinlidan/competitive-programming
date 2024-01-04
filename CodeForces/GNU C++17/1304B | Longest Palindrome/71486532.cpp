#include <bits/stdc++.h>
using namespace std;
 
bool palReverse(string x, string y)
{
 reverse(y.begin(), y.end());
 if(x==y) return 1;
 return 0;
}
bool pal(string x)
{
 int left = 0, right = x.length()-1;
 while(left < right)
 {
  if(x[left] != x[right]) return 0;
  left++;
  right--;
 }
 return 1;
 
}
 
int main()
{
 int n, m;
 vector<string> ans;
 string mid = "";
 int longest = 0;
 string arr[105] = {};
 
 cin >> n >> m;
 for(int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 //for(int i = 0; i < n; i++) cout << arr[i] << endl;
 
    for(int i = 0; i < n; i++)
 {
  if(arr[i] == "") continue;
  for(int j = 0; j < n; j++)
  {
   if(i == j) continue;
   if(arr[j] == "") continue;
   if(palReverse(arr[i], arr[j]))
   {
    ans.push_back(arr[i]);
    arr[i] = "";
    arr[j] = "";
    //cout << "1 " << arr[i] << endl;
   }
  }
 }
 //cout << "--\n";
 for(int i = 0; i < n; i++)
 {
  if(arr[i] == "") continue;
  //cout << arr[i]  << pal(arr[i])<< endl;
  if(pal(arr[i]))
  {
   if(arr[i].length() > longest )
   {
    longest = arr[i].length();
    mid = arr[i];
   }
  }
 }
 string hsl = "";
 for(int i = 0; i < ans.size(); i++)
 {
  //cout << ans[i];
  hsl+= ans[i];
 }
 //cout << mid;
 hsl += mid;
 for(int i = ans.size()-1; i >= 0; i--)
 {
  reverse(ans[i].begin(), ans[i].end());
  //cout << ans[i];
  hsl += ans[i];
 }
 cout << hsl.length() << endl;
 cout<< hsl;
 cout << endl;
 
 
 return 0;
}