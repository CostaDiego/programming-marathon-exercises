#include <bits/stdc++.h>

using namespace std;

string name;

int letters = 1;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> name;

    sort(name.begin(), name.end());

    char previous = name[0];
    char actual;

    for (string::size_type i = 1; i < name.size(); i++) {
        actual = name[i];
        if(previous == actual){
            continue;
        }else{
            letters++;
            previous = name[i];
        }
    }

    if ((letters % 2) == 0){
        cout << "CHAT WITH HER!"<< endl;
    }else{
        cout << "IGNORE HIM!"<< endl;
    }
}