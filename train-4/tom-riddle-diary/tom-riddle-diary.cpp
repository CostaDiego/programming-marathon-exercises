#include <bits/stdc++.h>
using namespace std;

int numberElements = 0;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    cin >> numberElements;

    vector <string> names(numberElements);
    vector <string>::iterator it;

    for(int i = 0; i < numberElements; i++){
        cin >> names[i];
    }
    cout << "NO" << endl;
    for (int i = 1; i < numberElements; i++){
        it = find(names.begin(), names.begin() + i-1, names[i]);
        if (*it == names[i]){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}