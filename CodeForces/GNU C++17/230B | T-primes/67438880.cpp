#include <bits/stdc++.h>
using namespace std;
 
long long int DP[10000005]={}, cnt=0;
bool DPbool[10000005]={false};
bool isPrime(long long int a){
    if(a <= 1) return false;
    if(DP[a] != 0){
        return DPbool[a];
    }
    else{
        for(int i = 2; i <= floor(sqrt(a)); i++){
            cnt++;
            if(a % i == 0){
                DP[a] = 1;
                return  false;
            }
        }
 
    }
    DP[a] = 1;
    DPbool[a] = true;
    return true;
 
}
bool solve(long long int a){
    if(a == 1) return false;
    if(floor(sqrt(a)) == sqrt(a)){
        return isPrime(floor(sqrt(a)));
    }
 
    return floor(sqrt(a)) == sqrt(a);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    long long int n, a;
    cin >> n;
 
    while(n--){
        cin >> a;
        if(solve(a)) cout << "YES\n";
        else cout << "NO\n";
 
    }
 
 
 
 
    //cout << cnt;
    return 0;
}