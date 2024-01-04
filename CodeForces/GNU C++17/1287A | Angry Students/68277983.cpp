#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int idx = -1;
        for(int i = 0; i < n; i++){
            if(s[i] == 'A'){
                idx = i;
                break;
            }
        }
 
        int mx= 0;
        int total = 0;
        if(idx != -1){
            for(int i = idx; i < n; i++){
            if(s[i] == 'P'){
                total++;
                mx = max(total, mx);
            }
            else{
                total = 0;
            }
        }
        }
 
        cout << mx << endl;
 
 
    }
 
 
 
    return 0;
}