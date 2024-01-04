#include <bits/stdc++.h>
using namespace std;
 
int arr[105] = {};
 
int hasil = -1e9;
void solve(int i, int j, int N)
{
    //if(DP[i][j] != 0) return DP[i][j];
    if(j > N){
        i++;
        j = i;
    }
    if(i > N){
        return ;
    }
    int ans = 0;
    for(int a = i; a <= j; a++){
        ans += (1 - arr[a]);
    }
    for(int a = 1; a < i; a++){
        //cout<< i << " " << j << endl;
        ans += arr[a];
    }
    for(int a = j+1; a <= N; a++){
        ans+= arr[a];
    }
    //cout << ans << endl;
    //cout << i << " " << j<< " HASIL : " << ans <<  endl;
    if(ans <= N) hasil = max(ans, hasil);
 
 
    solve(i, j+=1, N);
 
}
int main()
{
    int N;
    cin >> N;
    for(int i =1 ;i <= N; i++){
        cin >> arr[i];
    }
 
    solve(1, 1, N);
    cout << hasil << endl;
 
 
 
 
    return 0;
}