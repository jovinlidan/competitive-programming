#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, arr[500]={};
        bool selisihSatu= false, odd = false, even = false;
        cin >> n;
        for(int i =0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] % 2 == 0)even = true;
            else odd = true;
        }
        sort(arr, arr+n);
        for(int i= 1; i < n; i++)
        {
            if(abs(arr[i-1] - arr[i]) == 1)
            {
                selisihSatu = true;
            }
        }
        if(selisihSatu && odd && even) cout << 2 << endl;
        else if(!selisihSatu &&( odd || even)) cout << 1 << endl;
 
    }
 
 
 
 
    return 0;
}