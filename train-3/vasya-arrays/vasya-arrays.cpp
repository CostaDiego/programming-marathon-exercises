#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll arrayAsize = 0;
ll arrayBsize = 0;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> arrayAsize;

    vector <ll> arrayA(arrayAsize);

    cin >> arrayA[0];

    for (size_t i = 1; i < arrayAsize; i++){
        cin >> arrayA[i];
        arrayA[i] += arrayA[i-1];
    }

    cin >> arrayBsize;

    vector <ll> arrayB(arrayBsize);

    cin >> arrayB[0];

    for (size_t i = 1; i < arrayBsize; i++){
        cin >> arrayB[i];
        arrayB[i] += arrayB[i-1];
    }

    if(arrayA[arrayAsize-1] != arrayB[arrayBsize-1]){
        cout << -1 << endl;
        return 0;
    }

    vector <ll> result;
    size_t i = 0, j = 0;

    while (i < arrayAsize && j < arrayBsize)
    {
        if (arrayA[i] == arrayB[j]){
            result.push_back(arrayB[j]);
            i++;
            j++;
        }else{
            while(arrayA[i] != arrayB[j]){
                if (arrayA[i] < arrayB[j]){
                    i++;
                }else{
                    j++;
                }
            }
            result.push_back(arrayB[j]);
            i++;
            j++;
        }
    }

    cout << result.size() << endl;
    
    return 0;
}
