#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=201000;

ll numPoints = 0;
ll maxDist = 0;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> numPoints >> maxDist;

    vector <ll> points(numPoints);

    for(size_t i = 0; i < numPoints; i++){
        cin >> points[i];
    }

    ll result = 0, j = 0, dist = 0;
    
    for (size_t i = 0; i < numPoints; i++){

        while(j < numPoints - 1 && points[j+1] - points[i] <= maxDist){
            j++;
        }
        dist = j - i;
        result += (dist *(dist - 1))/2;
    }
    cout << result << endl;

    return 0;
}