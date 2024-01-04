#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
 {
        lli n, total = 0, cnt = 0, mx=-1e9, mn = 1e9;
        cin >> n;
        lli arr[n+5] = {};
        for(int i = 1;i <= n; i++)cin >> arr[i];
        for(int i = 1; i <= n; i++)
  {
   if(arr[i] == -1)
   {
    if(arr[i-1] != -1 && i != 1)
    {
     total += arr[i-1];cnt++; mx = max(mx, arr[i-1]); mn= min(mn, arr[i-1]);
    }
 
    if(arr[i+1] != -1 && i != n)
    {
     total += arr[i+1];cnt++; mx = max(mx, arr[i+1]); mn= min(mn, arr[i+1]);
    }
   }
  }
  //cout<< "TOTAL " << total << " " << "CNT " << cnt << endl;
  if(cnt == 0)
  {
   cout << 0 << " " << 1 << endl;
   continue;
  }
  lli atas = ceil(mx+mn)/ 2;
  lli bawah = floor(mx+mn) / 2;
  lli gap = 0;
  for(int i = 1; i <= n; i++)
  {
   if(arr[i] == -1)arr[i] = bawah;
   if(i == 1)continue;
   gap = max(gap, abs(arr[i] - arr[i-1]));
  }
  if(atas != bawah)
  {
            lli mxAtas = -1e9;
            lli mxBawah = -1e9;
 
            mxAtas = max(mxAtas, max(abs(atas - mx), abs(atas-mn)));
            mxBawah = max(mxBawah, max(abs(bawah - mx), abs(bawah-mn)));
 
            if(mxAtas >= mxBawah)cout << gap << " " << bawah << endl;
            else cout << gap << " " << bawah << endl;
 
  }
  else cout << gap << " " << bawah << endl;
 
 
 }
 
 
 
 
 return 0;
}