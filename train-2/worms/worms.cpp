#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=201000;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll numbPiles;
    cin >> numbPiles;

    vector <int> worms(numbPiles);

    cin >> worms[0];
    for (int i = 1; i < numbPiles; i++){
        cin >> worms[i];
        worms[i] += worms[i-1];
    }

    ll numbJuicy;
    cin >> numbJuicy;

    vector <int> juicyWorms(numbJuicy);

    for(int i = 0; i < numbJuicy; i++){
        cin >> juicyWorms[i];
    }

    for (int i = 0; i < numbJuicy; i++){
        int left = 0;
        int right = numbPiles;
        int center;

        while (left <= right){
            center = (left + right) >> 1;

            if (left == right){
                cout << center + 1 << endl;
                break;
            }

            if(worms[center] < juicyWorms[i]){
                left = center + 1;

            }else{
                right = center;
            }
        }
    }

    return 0;
}