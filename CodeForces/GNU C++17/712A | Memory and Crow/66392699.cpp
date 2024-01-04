#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int n, data[100005]= {}, ans[100005]= {}, trackers=0, oddC=0, evenC=0, counts=-1;
    cin >> n;
 
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }
    ans[n-1] = data[n-1];
    for(int i = n-1; i >=0; i--)
    {
        if(i % 2 == 0){
            ans[i] = evenC + data[i];
            evenC += -ans[i];
            oddC += ans[i];
 
        }else{
            ans[i] = oddC + data[i];
            evenC += ans[i];
            oddC += -ans[i];
 
        }
 
    }
 
    for(int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
 
 
 
    return 0;
}