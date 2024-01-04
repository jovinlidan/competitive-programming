#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x,i;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> x;
        string ans = "NO\n";
        for(int j = 0; j <= min(x, 33); j++){
            for(int k = 0; k <= min(x, 33); k++){
                if(((j*3) + (k * 7)) == x){
                    ans = "YES\n";
                    break;
                }
            }
            if(ans == "YES\n"){
                break;
            }
        }
        cout << ans ;
 
 
 
 
    }
    return 0;
}