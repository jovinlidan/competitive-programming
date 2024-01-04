#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int n, total=0, first=0, second=0, remain=0, capacity;
    bool isYes = true;
 
    cin >> n;
 
    for(int i = 0; i < n; i++)
    {
        cin >> remain;
        total += remain;
    }
    for(int i = 0; i < n; i++)
    {
        cin >> capacity;
        if(i == 0)
            first = capacity;
        else if (i==1)
            second = capacity;
        else if (i == 2)
        {
            if(first < second)
            {
                int temp = first;
                first = second;
                second = temp;
            }
            if(capacity > first)
            {
                second = first;
                first = capacity;
            }
            else if(capacity > second){
                second = capacity;
            }
        }
        else
        {
            if(capacity > first)
            {
                second = first;
                first = capacity;
            }else if(capacity > second){
                second = capacity;
            }
        }
    }
    if(total <= (first+second)|| (n == 2))
        cout << "YES\n";
    else
        cout << "NO\n";
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}