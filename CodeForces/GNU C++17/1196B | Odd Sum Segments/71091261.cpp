    #include <bits/stdc++.h>
    using namespace std;
 
    int absolut (int x)
    {
     if(x < 0) return x*=-1;
     return x;
    }
 
    int main()
    {
     ios_base::sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0);
 
     int tc;
     cin >> tc;
     while(tc--)
     {
      int n, k, odd=0, total = 0;
      cin >> n >> k;
      int arr = 0;
      vector<int> ans;
      ans.clear();
      for(int i =1; i <= n; i++)
      {
       cin >> arr;
       if(arr % 2 == 1)
       {
        ans.emplace_back(i);
       }
      }
      if((ans.size() < k) || (ans.size()- k)% 2 == 1)cout << "NO\n";
      else
      {
       cout << "YES\n";
                int gap = absolut(ans.size() - k);
                for(int i = 0; i < ans.size(); i++)
       {
        if(i != 0) cout << " ";
        if(k == 1)
        {
         cout << n;
         break;
        }
        if(gap > 0)
        {
         cout << min(n, ans[i+2]);
         gap -=2;
         i+=2;
        }
        else
        {
         cout << min(n, ans[i]);
        }
        k--;
 
       }
       cout << endl;
 
      }
 
 
 
 
 
 
     }
 
 
 
 
 
 
 
 
 
 
     return 0;
    }