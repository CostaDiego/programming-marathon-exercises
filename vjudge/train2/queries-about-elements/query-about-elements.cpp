#include <bits/stdc++.h>

using namespace std;

int n,m;
vector <int> a;
vector <int> b;

int main(){
    vector<int>::iterator itA;
    vector<int>::iterator itB;

    cin >> n >> m;

    int tempA [n];
    int tempB [m];

    for(int i = 0; i < n; i++){
        cin >> tempA[i];
    }

    for(int i = 0; i < m; i++){
        cin >> tempB[i];
    }

    a.insert(a.begin(), tempA, tempA + n);
    sort(a.begin(),a.end());

    b.insert(b.begin(), tempB, tempB + m);
    
    for (itB = b.begin(); itB < b.end();itB++){
        int out = upper_bound(a.begin(), a.end(),*itB) - a.begin();
        cout << out << ' ';

    }
        

}