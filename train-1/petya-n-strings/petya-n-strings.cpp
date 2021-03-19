#include <bits/stdc++.h>

using namespace std;

string first;
string second;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> first;
    cin >> second;

    for (string::size_type i = 0; i < first.size(); i++) {
        if (first[i] >= 91){
            first[i] -= 32;
        }
    }

    for (string::size_type i = 0; i < second.size(); i++) {
        if (second[i] >= 91){
            second[i] -= 32;
        }
    }

    if (first < second){
        cout << -1 << endl;
    }else if(first > second){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }

}