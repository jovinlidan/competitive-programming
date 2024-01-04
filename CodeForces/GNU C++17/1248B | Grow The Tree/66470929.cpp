#include <bits/stdc++.h>
using namespace std;
 
long long int pitagorasCuk(long long int a, long long int b){
    a = a * a;
    b = b * b;
    return a+b;
}
 
int main(){
    long long int n, a[100005]={}, left=0, right = 0, mx = -1e9;
 
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        right += a[i];
 
    }
    sort(a, a+n);
 
    for(int i =0; i < n/2 ; i++){
        left += a[i];
    }
    right = right - left;
 
    cout << pitagorasCuk(left, right);
 
 
    return 0;
}