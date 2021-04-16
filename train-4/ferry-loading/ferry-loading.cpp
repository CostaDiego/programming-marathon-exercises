#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=201000;

string const LEFT = "left";
string const RIGHT = "right";

ll testCases = 0;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> testCases;

    vector <ll> result(testCases); 


    for (size_t i  = 0; i < testCases; i++){
        ll lenght, carQueue;
        ll acc = 0;
        string side = LEFT;

        cin >> lenght >> carQueue;

        vector <pair<int,string>> queue(carQueue);

        lenght *= 10;

        int carLenght;
        string carSide;

        for(size_t j = 0; j < carQueue; j++){
            cin >> carLenght >> carSide;
            queue[j] = make_pair(carLenght, carSide);
        }

        for (size_t j = 0; j < carQueue; j++){
            cout << queue[j].first << " " << queue[j].second << endl; 
        }

    }

    return 0;
}