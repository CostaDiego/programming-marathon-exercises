#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=201000;

int binarySearch(vector <int> v, int key){
    int left = 0;
    int right = v.size() - 1;
    int center;

    while (left <= right){
        center = (left + right) >> 1;

        if (left == right){
            return center;
        }

        if(v[center] < key){
            left = center + 1;

        }else{
            right = center;
        }
    }
    return -1;
}

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
    
    for (int i = 0; i < juicyWorms.size(); i++){
        cout << binarySearch(worms, juicyWorms[i]) + 1 << endl;
    }

    return 0;
}