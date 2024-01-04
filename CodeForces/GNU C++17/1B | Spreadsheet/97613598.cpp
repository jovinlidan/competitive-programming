#include <bits/stdc++.h>
using namespace std;
#define lli long long int
 
 
 
int toInt(string s)
{
    stringstream cvt(s);
    int x = 0;
    cvt >> x;
    return x;
}
int length;
void res(string& s)
{
    length = s.length();
    for(int i = length-1; i >= 0; i--)
    {
        if(s[i] != 'Z')
        {
            s[i]++;
            for(int j = i+1; j < length; j++)
            {
                s[j] = 'A';
            }
            return;
        }
    }
    s = string(length+1, 'A');
 
}
string t1 ="", t2= "";
void solveRC(string s)
{
    bool v = 0;
    length = s.size();
    for(int i = 0; i < length; i++)
    {
        if(s[i] == 'C')
        {
            v = 1;
            continue;
        }
        if(s[i] == 'R')continue;
        if(!v)t1.push_back(s[i]);
        else t2.push_back(s[i]);
 
    }
}
 
void solveBC(string s)
{
    bool v = 0;
    length = s.size();
    for(int i = 0; i < length; i++)
    {
        if( !(s[i] >= 'A' && s[i] <= 'Z') )
        {
            v = 1;
        }
        if(!v)t1.push_back(s[i]);
        else t2.push_back(s[i]);
 
    }
}
 
int cntAbc(string s)
{
    length = s.length()-1;
    int ans = 0;
    for(int i = 0; i <= length; i++)
    {
        ans += ((s[i] - 64) * pow(26, length - i));
    }
    return ans;
}
 
 
int main()
{
 
 //   freopen("output.txt", "w", stdout);
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
    string a = "A";
    int ranges[] = {cntAbc("A"), cntAbc("AA"), cntAbc("AAA"), cntAbc("AAAA"), cntAbc("AAAAA"), cntAbc("BDWGN")};
    string strings[] = {"A", "AA", "AAA", "AAAA", "AAAAA","BDWGN"};
    //unordered_map<string, int>ss;
    //unordered_map<int, string>ii;
    //string ii[1000005] = {};
 
//   for(int i = 1; i <= 1000000; i++)
//    {
//        ss[a] = i;
//        ii[i] = a;
//        cout << a  << "-"<<i << '\n';
//        res(a);
//    }
    int n;
    cin >> n;
    bool rc = 1;
    int cCnt = 0;
    for(int i = 0;i < n; i++)
    {
        string xxx;
        cin >> xxx;
        cCnt = 0;
        rc = 1;
        for(int i = xxx.length()-1; i>= 0; i--)
        {
            if(xxx[i] == 'C')
            {
                if(i != 0)
                {
                    cCnt++;
                    if(xxx[i-1] >= 'A' && xxx[i-1] <='Z')
                    {
                       rc = 0;
                       break;
                    }
                }
            }
        }
        if(!cCnt)rc = 0;
        t1 = "";
        t2 = "";
        //cout << xxx << " " << rc << endl;
        if(rc)
        {
            solveRC(xxx);
            int qq = toInt(t2);
            for(int i = 0; i < 5; i++)
            {
                if(qq >= ranges[i] && qq <= ranges[i+1])
                {
                    //cout << qq  << ranges[i] << endl;
                    a = strings[i];
                    int curRange = ranges[i];
                    int gap =  qq - curRange;
 
                    for(int v = a.length()-1; v >= 0; v--)
                    {
                        a[v] += (gap % 26);
                        gap /= 26;
                    }
 
 
                    cout << a << t1 << '\n';
 
                    break;
                }
            }
        }
        else
        {
            solveBC(xxx);
            cout << "R" << t2 << "C" << cntAbc(t1) << '\n';
        }
    }
 
 
 
 
}
 
 