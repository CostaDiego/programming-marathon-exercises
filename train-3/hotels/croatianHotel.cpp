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

    ll result = 0;
    vector<ll>::iterator itI = listHotels.begin();
    vector<ll>::iterator itJ;

    while(itI != listHotels.end()) {
        ll resultLoop = *itI;
        itJ = itI + 1;
        while(itJ != listHotels.end()){
            if(resultLoop + *itJ<= target){
                resultLoop += *itJ;
                ++itJ;
            }else{
                break;
            }
        }
        if(resultLoop > result) result = resultLoop;
        ++itI;
    }

    cout << result << endl;

    return 0;
}