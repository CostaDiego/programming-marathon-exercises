#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=201000;

ll numHotels = 0;
ll target = 0;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> numHotels >> target;

    vector <ll> listHotels(numHotels);

    for(size_t i = 0; i < numHotels; i++){
        cin >> listHotels[i];
    }

    ll result = 0, acum = 0, i = 0, j = 0;

    while (i < numHotels || j < numHotels){
        if(acum <= target && j < numHotels){
            acum += listHotels[j];
            j++;
        }else{
            acum -= listHotels[i];
            i++;
        }

        if(acum > result && acum <= target){
            result = acum;
        }
    }
    

    cout << result << endl;

    return 0;
}