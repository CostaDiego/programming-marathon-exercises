#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=201000;

int query = 0;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> query;

    vector <string> input(query);

    for(size_t i = 0; i < query; i++){
        cin >> input[i];
    }

    for(auto v: input){
        int i = 0, j = 1;
        while(v[j]){
            if(v[i] > v[j]){
                if(((int)v[i] % 2) != ((int)v[j] % 2)){
                    char temp = v[i];
                    v[i] = v[j];
                    v[j] = temp;
                    
                    if(i == 0){
                        i++;
                        j++;
                    }else{
                        while(i != 0){
                            i--;
                            j--;
                            if(((int)v[i] % 2) != ((int)v[j] % 2) && (v[i] > v[j])){
                                break;
                            }
                        }
                    }
                }else{
                    i++;
                    j++;
                }

            }else{
                i++;
                j++;
            }
        }

        cout << v << endl;
    }

}