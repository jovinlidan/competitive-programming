#include <bits/stdc++.h>
using namespace std;
#define mxN 200005
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<int, pair<int, int>> piii;
 
 
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    string tt;
 //   vector<int> len;
    vector<string> s;
    int mxL=-1e9, idx=0;
    while(getline(cin, tt))
    {
        s.push_back(tt);
        //len.push_back(tt.length());
        mxL = max(mxL, (int)tt.size());
    }
 
    for(int i = 0; i < mxL+2; i++)
    {
        cout << "*";
    }
    cout << '\n';
    bool left = 1;
 
    for(int i = 0; i < s.size(); i++)
    {
        cout << '*';
        idx = 0;
        int n = s[i].size();
        if(n == 0)
        {
            for(int i = 0; i < mxL; i++ )cout << " ";
        }
        else
        {
            int x = mxL - n;
            if((mxL - n) % 2 == 0)
            {
                x = x/2;
            }
            else
            {
                if(left) x = x/2, left = !left;
                else x = x/2+1, left = !left;
            }
            while(idx < mxL)
            {
                if(idx == x)
                {
                    cout << s[i];
                    idx += n;
                }else
                {
                    cout << " ";
                    idx++;
                }
 
            }
        }
        cout << "*\n";
    }
 
 
 
 
 
 
    for(int i = 0; i < mxL+2; i++)
    {
        cout << "*";
    }
    cout << '\n';
 
 
 
//    cout << s.size() << '\n';
//    for(int i = 0; i < s.size(); i++)
//    {
//        cout << s[i] << '\n';
//    }
 
    return 0;
}