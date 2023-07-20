#include<bits/stdc++.h>
#define JS() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
typedef long long LL;
using namespace std;
 
int main()
{
    JS();
    LL q;
    q = 1;
//    cin >> q;
    while(q--) {
        string s1,s2;
        cin >> s1;
        s2 = s1;
        reverse(s2.begin(), s2.end());
        if(s1==s2){
            if(s1.size() % 2==0){
            cout << "NO" << endl;
            return 0;
            }
        }
        for(int i=0;i < s1.length();i++){
            if(s1[i]!=s2[i]){
                s2[i] = s1[i];
                break;
            }
        }
        s1 = s2;
        reverse(s1.begin(), s1.end());
        if(s1==s2){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
 
    }
 
    return 0;
}
