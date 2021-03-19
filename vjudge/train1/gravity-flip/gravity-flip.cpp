#include <bits/stdc++.h>

using namespace std;

int columns = 0;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> columns;

    vector <int> blocks(columns);

    for(int i = 0; i < columns; i++){
        cin >> blocks[i];
    }

    sort(blocks.begin(), blocks.end());

    for(auto x : blocks){
        cout << x << ' ';
    }

    cout << endl;

    return 0;
}