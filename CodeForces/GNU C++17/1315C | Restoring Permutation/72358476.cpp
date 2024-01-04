#include <bits/stdc++.h>
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
        bool vsted[205] = {false};
        int n;
        cin >> n;
        int arr[n+5] = {};
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            vsted[arr[i]] = true;
        }
        vector<int> ans;
        bool valid = true;
        for(int i = 0; i < n;i++)
        {
            ans.push_back(arr[i]);
            bool ada = false;
            for(int j = arr[i]+1; j <= 2*n; j++)
            {
                if(!vsted[j])
                {
                    vsted[j] = true;
                    ans.push_back(j);
                    ada = true;
                    break;
                }
            }
            if(!ada)
            {
                valid = false;
                break;
            }
        }
        if(valid)
        {
            for(int i = 0; i < ans.size(); i++)
            {
                if(i != 0)cout << " ";
                cout << ans[i];
            }
            cout << endl;
        }else cout << -1 << endl;
    }
 
 
 
    return 0;
}