#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int N, M, a[105]={}, b[105]={}, cnt=0;
    bool chk[105]={false};
    cin >> N;
 
    for(int i = 0; i < N ; i++){
        cin >> a[i];
    }
    cin >> M;
    for(int i = 0; i < M ; i++){
        cin >> b[i];
    }
    sort(a, a+N);
    sort(b, b+M);
 
    for(int i =0 ; i < N; i++){
        for(int j = 0; j < M; j++){
            if( (abs(a[i] - b[j]) == 1 || a[i] == b[j])&& chk[j] == false){
                chk[j] = true;
                cnt++;
                break;
            }
        }
    }
 
    cout << cnt <<endl;
 
 
    return 0;
}