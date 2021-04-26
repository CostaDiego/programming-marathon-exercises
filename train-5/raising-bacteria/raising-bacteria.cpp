#include <bits/stdc++.h>
typedef long long ll;
const ll N=201000;

using namespace std;

ll bacteria = 0;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> bacteria;

    cout << __builtin_popcount(bacteria) << endl;

    return 0;
}