#include <bits/stdc++.h>
typedef long long ll;
typedef pair<ll, pair<ll,ll>> from_to_len;

using namespace std;

ll m, n;

vector <from_to_len> roads;
ll total_lenght = 0;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> m >> n;

    roads.reserve(n);

    while (m || n)
    {
        ll from, to, lenght;
        for (size_t i = 0; i < n; i++)
        {   
            cin >> from >> to >> lenght;
            total_lenght += lenght;
            roads[i] = make_pair(lenght, make_pair(from, to));
        }

        sort(roads.begin(), roads.end());

        



        cin >> m >> n;
    }
    
    return 0;
}