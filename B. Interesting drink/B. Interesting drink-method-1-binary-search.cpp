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
        LL n,m;
        cin >> n;
        LL arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        cin >> m;
        LL num;
        sort(arr,arr+n);
        while(m--){
            cin >> num;
            LL l = -1;
            LL r = n;
            LL mid;
            while(r > l+1){
                mid = (l+r) / 2;
                if(arr[mid] <= num){
                    l = mid;
                }else{
                    r = mid;
                }
            }
            cout << l+1 << endl;
        }
    }

    return 0;
}
