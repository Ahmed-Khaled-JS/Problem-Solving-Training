#include<bits/stdc++.h>
#define JS() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
typedef long long LL;
using namespace std;
 
int main()
{
    JS();
    LL q;
    map<string,LL>m;
    cin >> q;
    while(q--) {
        string s1;
        cin >> s1;
        if(m[s1]!=0)
        cout << s1 << m[s1] << endl;
        else
        cout << "OK"<< endl;
        m[s1]++;
 
    }
 
    return 0;
}
