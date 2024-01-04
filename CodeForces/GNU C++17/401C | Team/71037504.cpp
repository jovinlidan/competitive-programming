    #include <bits/stdc++.h>
    #define pb(x) push_back(x)
    using namespace std;
    int main()
    {
     ios_base::sync_with_stdio(false);
     cout.tie(0);
     cin.tie(0);
     int zero, one;
     cin >> zero >> one;
     char z = '0', o = '1';
     string s = "";
     bool valid = true;
  if(one == zero)
  {
   for(int i = 0; i < one*2; i++)
   {
    if(i % 2 ==0) cout << 0;
    else cout << 1;
   }
   return 0;
 
 
  }
     if(zero - one >= 2)cout << -1 << endl;
     else
     {
      while(zero > 0 || one > 0)
      {
 
       if(one - zero == 1)
       {
        s.pb('1');
        one--;
        if(zero == 0) break;
        s.pb('0');
        zero--;
       }
       else if(zero-one == 1)
       {
        s.pb('0');
        zero--;
        if(one == 0) break;
        s.pb('1');
        one--;
       }
       else if(one - zero >= 2)
       {
        s.pb('1');
        s.pb('1');
        one-=2;
        if(zero == 0) break;
        s.pb('0');
        zero--;
       }
       else if(zero-one >= 2)break;
 
 
      }
      if(valid && zero == 0 && one == 0) cout << s << endl;
      else cout << -1 << endl;
 
     }
 
 
 
 
 
 
 
 
 
 
     return 0;
    }