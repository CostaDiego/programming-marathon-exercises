#include <bits/stdc++.h>
typedef long long ll;
const ll N=201000;

using namespace std;

ll inputA = 0, inputB = 0;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    while(cin >> inputA >> inputB){

        cout << (inputA ^ inputB) << '\n';
    };

    return 0;
} 