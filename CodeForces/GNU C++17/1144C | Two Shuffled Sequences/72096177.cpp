#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    bool valid = true, found = false;
    cin >> n;
    int arr[n+5] = {}, cnt[200005] = {};
    for(int i = 0; i < n; i++)
 {
  cin >> arr[i];
  cnt[arr[i]]++;
  if(cnt[arr[i]] >= 3) valid = false;
  if(cnt[arr[i]] >= 2) found = true;
 }
 if(valid)
 {
  //cout << "---\n";
  sort(arr, arr+n);
 
  if(found)
  {
   vector<int> inc, desc;
   cout << "YES\n";
 
   for(int i = 0; i < n; i++)
   {
    if(arr[i] == arr[i+1])
    {
     desc.push_back(arr[i]);
    }
    else inc.push_back(arr[i]);
   }
   int iS = inc.size(), dS = desc.size();
   cout << iS << endl;
   for(int i = 0; i < iS; i++)
   {
    if(i != 0)cout << " ";
    cout << inc[i];
   }
   cout << endl;
   cout << dS  << endl;
   reverse(desc.begin(), desc.end());
   for(int i = 0; i < dS; i++)
   {
    if(i != 0)cout << " ";
    cout << desc[i];
   }
 
 
 
   cout << endl;
 
  }
  else
  {
   cout << "YES\n";
   cout << n << endl;
   for(int i = 0; i < n; i++)
   {
    if(i != 0)cout << " ";
    cout << arr[i];
   }
   cout << endl;
   cout << 0 << endl;
   cout << endl;
  }
 
 
 
 
 }else cout << "NO\n";
 
 
 
 
 
 
 
 return 0;
}