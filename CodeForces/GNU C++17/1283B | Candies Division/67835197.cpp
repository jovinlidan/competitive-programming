#include <bits/stdc++.h>
using namespace std;
 
double generateDbl(int n , int k){
    if(n/double(k) - floor(n/double(k)) > 0.5){
        return floor(n/double(k)) + 0.5;
    }else{
        return (n/double(k));
    }
 
 
 
}
 
int main()
{
    long long int T, n, k, i;
    double ans=0;
    cin >> T;
    while(T--){
        cin >> n >> k;
        if(n % k == 0) cout << n << endl;
        else {
            long long test = n % k;
            if(test > floor(k/2)){
                test -= floor(k/2);
 
            }else{
                test = 0;
            }
            cout << n - test << endl;
        }
 
    }
 
 
 
    return 0;
}