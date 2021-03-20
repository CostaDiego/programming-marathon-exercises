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

    vector <int> listHotels(numHotels);

    for(size_t i = 0; i < numHotels; i++){
        cin >> listHotels[i];
    }

    int result = listHotels[0];

    for(size_t i = 0;i < numHotels; i++){
        int resultLoop = listHotels[i];
        for(size_t j = i + 1; j < numHotels; j++){
            if((resultLoop + listHotels[j]) <= target){
                resultLoop += listHotels[j];
            }else{
                break;
            }
        }

        if(resultLoop > result){
            result = resultLoop;
        }
    }

    cout << result << endl;

    return 0;
}