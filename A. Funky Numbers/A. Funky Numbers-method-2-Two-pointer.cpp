#include<bits/stdc++.h>
#define JS() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
typedef long long LL;
using namespace std;
 
int main()
{
    JS();
    LL q = 1;
//    cin >> q;
    while(q--){
        LL num;
        cin >> num;
        vector<LL>vec;
        LL pushernum = 0;
        for(int i=1;pushernum < num;i++){
            pushernum = (i*(i+1))/2;
            vec.push_back(pushernum);
        }
        auto it1 = vec.begin();
        auto it2 = vec.end();
        it2--;
        while(it1 <= it2){
            if(*it1 + *it2 == num){
                cout << "YES" << endl;
                return 0;
            }
            else if(*it1 + *it2 > num){
                it2--;
            }else{
                it1++;
            }
        }
        cout << "NO" << endl;
 
    }
 
    return 0;
}
