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
        LL size = vec.size();
        for(int i=0;i < size;i++){
            LL start=0;
            LL end = size-1;
            LL m;
            while(start <= end){
                m = (start + end)/2;
                if(vec[m] + vec[i] == num){
                    cout << "YES" << endl;
                    return 0;
                }else if(vec[m] + vec[i] > num){
                    end = m-1;
                }else{
                    start = m+1;
                }
            }
        }
        cout << "NO" << endl;

    }

    return 0;
}