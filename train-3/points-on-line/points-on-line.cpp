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

    ll result = 0, i = 0, j = 2, dist = 0;
    
    while (i < numPoints - 2 || j < numPoints){
        dist = points[j] - points[i];

        if (dist <= maxDist){
            result += j - i - 1;
        }
        if(j < numPoints - 1 && dist <= maxDist){
            j++;
        }else if(j - i == 2){
            j++;
            i++;
        }else{
            i++;
        }
    }
    cout << result << endl;

    return 0;
}