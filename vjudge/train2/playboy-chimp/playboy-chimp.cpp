#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=201000;

int sizeInputLadyChimps = 0;
int sizeInputQueries = 0;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> sizeInputLadyChimps;
    vector <int> ladyChimps(sizeInputLadyChimps);

    for (int i = 0; i < sizeInputLadyChimps; i++){
        cin >> ladyChimps[i];
    }

    cin >> sizeInputQueries;
    vector <int> queries(sizeInputQueries);

    for (int i = 0; i < sizeInputQueries; i++){
        cin >> queries[i];
    }

    for (int i = 0; i < sizeInputQueries; i++){
        int smaller = lower_bound(ladyChimps.begin(), ladyChimps.end(),queries[i])-ladyChimps.begin();
        int bigger = upper_bound(ladyChimps.begin(), ladyChimps.end(),queries[i]) - ladyChimps.begin();
        
        if(ladyChimps[smaller-1] == 0){
            cout << "X ";
        }else{
            cout << ladyChimps[smaller-1] << " ";
        }

        if (ladyChimps[bigger] == 0){
            cout << "X" << endl;
        }else{
            cout << ladyChimps[bigger] << endl;
        }
    }

    return 0;
}