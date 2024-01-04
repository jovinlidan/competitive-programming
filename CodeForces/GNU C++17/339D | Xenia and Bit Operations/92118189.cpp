#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
 
int n , m;
const int mxN = 4*132000;
int segTree[mxN] = {};
int arr[(1 << 18)+ 5] = {};
 
int countHeight(int i)
{
    i++;
    int ans = 0;
    while(i != 0)
    {
        i/=2;
        ans++;
    }
    return ans;
}
 
void constructTree(int low, int high, int pos)
{
    if(low == high)
    {
        segTree[pos] = arr[low];
        return;
    }
    int mid =  (low+high)/2;
    constructTree(low,mid, 2*pos+1);
    constructTree(mid+1,high, 2*pos+2);
    if(countHeight(2*pos+2) % 2 != (n%2))
    {
 
        segTree[pos] = (segTree[2*pos+1] | segTree[2*pos+2]);
    }
    else
    {
      //  cout << pos << "-\n";
        segTree[pos] = (segTree[2*pos+1] ^ segTree[2*pos+2]);
 
 
    }
 
}
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    cin >> n >> m;
    int length = (1 << n);
 
    for(int i = 0; i < length; i++)cin >> arr[i];
 
    constructTree( 0, length-1, 0 );
 
    for(int i = 0; i < m; i++)
    {
        int b, p, cnt = 0;
        cin >> p >> b;
        int segLoc = ((p-1) + (length-1));
        segTree[segLoc] = b;
        while(segLoc != 0)
        {
            int op ;
            if(segLoc % 2 == 1) op = 1;
            else op = -1;
            int up = ceil(segLoc / 2.0)-1;
            if(cnt %2 == 0)
            {
                segTree[up] = (segTree[segLoc] | segTree[segLoc+op]);
            }
            else
            {
                segTree[up] = (segTree[segLoc] ^ segTree[segLoc+op]);
            }
            segLoc = up;
            cnt++;
        }
        cout << segTree[0] << "\n" ;
 
 
    }
 
 
 
    return 0;
}