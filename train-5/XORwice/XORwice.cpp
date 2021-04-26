#include <bits/stdc++.h>
typedef long long ll;
const ll N=201000;

using namespace std;

size_t queries = 0;

ll numA = 0, numB = 0;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> queries;
    vector <ll> cases (queries);

    for(size_t i = 0; i < queries; i++){
        cin >> numA >> numB;
        cases[i] = (numA ^ numB);
    }

    for(size_t i = 0; i < queries; i++){
        cout << cases[i] << endl;
    }

    return 0;
} 