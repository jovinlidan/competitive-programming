#include <bits/stdc++.h>
using namespace std;
 
int mn(int n)
{
 return min(n, 0);
}
int main()
{
 ios_base::sync_with_stdio(false);
 cout.tie(0);
 cin.tie(0);
 int tc;
 cin >> tc;
 while(tc--)
 {
        int n, m, k, arr[105] = {};
        cin >> n >> m >> k;
        bool valid = true;
 
        for(int i = 0; i < n; i++)cin >> arr[i];
        for(int i = 0; i < n-1; i++)
  {
            if(abs(arr[i] - arr[i+1]) <= k)
   {
    if(arr[i] - arr[i+1] > -k)
    {
     //cout << arr[i] << " " << m << endl;
     m += min(arr[i], abs(arr[i] - (arr[i+1] - k)));
     //cout << arr[i] << " " << m << endl;
 
    }
 
   }
   else
   {
    if(arr[i+1] - arr[i] > k)
    {
     //TUMPUK
     int needed = (arr[i+1]-k) - arr[i];
     //cout << needed << " " << arr[i] << " " << arr[i+1] << " " << m << endl;
     if(m >= needed)m -= needed;
     else valid = false;
    }
    else
    {
                    //SIMPAN
     //cout << arr[i] << " " << m << endl;
                    m += min(arr[i], abs(arr[i] - (arr[i+1] - k)));
     //cout << arr[i] << " " << m << endl;
    }
   }
  }
  if(valid) cout << "YES\n";
  else cout << "NO\n";
 
 }
 
 
 
 
 
 
 
 return 0;
}