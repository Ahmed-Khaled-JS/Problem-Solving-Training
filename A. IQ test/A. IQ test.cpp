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
    LL n ,j,k,counter1 = 0,counter2 = 0;
    cin >> n;
    int arr[n];
    for(int i =0;i < n;i++){
     cin >> arr[i];
     if(arr[i] % 2 == 0){
        counter1++;
        j = i;
     }
     else {
        counter2++;
        k = i;
     }
    }
    if(counter1 == 1){
        cout << j+1 << endl;
    }
    if(counter2 == 1){
        cout << k+1 << endl;
    }
 
    }
 
    return 0;
}
