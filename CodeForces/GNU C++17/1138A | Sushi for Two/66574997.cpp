#include <bits/stdc++.h>
 
using namespace std;
int main()
{
    int n, data[100005], one=0, two=0, counts=0;
    map <int, int> cnt;
    cin >> n;
    bool lOne=false, lTwo=false;
    for(int i =0; i < n ; i++)
    {
        cin >> data[i];
        if(data[i] == 1)
        {
            if(cnt[1] != 0 && lTwo)
            {
                int mn = min(cnt[2], cnt[1]);
                counts = max(counts, 2*mn);
    //cout << 1 << endl;
    cnt[1] = 0;
            }
            one++;
            cnt[data[i]] = one;
            two = 0;
            lOne = true;
            lTwo = false;
        }
        else
        {
            if(cnt[2] != 0 && lOne)
            {
                int mn = min(cnt[2], cnt[1]);
                counts = max(counts, 2*mn);
                //cout << 1 << endl;
                cnt[2] = 0;
            }
            two++;
            cnt[data[i]] = two;
            one = 0;
 
            lOne = false;
            lTwo = true;
        }
    }
 int mn = min(cnt[2], cnt[1]);
 counts = max(counts, 2*mn);
 cout << counts << endl;
 
 
 
 
    return 0;
}