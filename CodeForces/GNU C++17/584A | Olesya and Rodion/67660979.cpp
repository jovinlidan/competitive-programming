#include <bits/stdc++.h>
 
using namespace std;
int main()
{
    long long n , t, ribuan=1;
    cin >> n >> t;
 
    ribuan = pow(10, n-1);
 
    if(n == 1 && t == 10){
        cout << -1 << endl;
        return 0;
    }
    if(t == 10){
        for(int i =0 ; i < n; i++){
            if(i==0) cout << 1;
            else cout << 0;
        }
        return 0;
    }
    for(int i = 0; i < n; i++){
        cout << t;
    }
 
 
 
    return 0;
}