#include <bits/stdc++.h>

using namespace std;

int magnetGroups = 1;
int magnetNumber = 0;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> magnetNumber;

    vector <int> magnets(magnetNumber);

    cin >> magnets[0];
    int previousMagnet = magnets[0];

    for(size_t i = 1; i < magnetNumber; i ++){
        cin >> magnets[i];

        if(previousMagnet != magnets[i]){
            magnetGroups++;
            previousMagnet = magnets[i];
        }

    }

    cout << magnetGroups << endl;

    return 0;
}