#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=201000;

int query = 0;

int getIndice(string &number, int index, bool even){
    if(index == -1) return -1;

    if(even){
        while (number[index])
        {
            if((int)number[index] % 2 == 0){
                return index;
            }
            index++;
        }   
    }else{
        while (number[index])
        {
            if((int)number[index] % 2 != 0){
                return index;
            }
            index++;
        }
        
    }

    return -1;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> query;

    vector <string> input(query);

    for(size_t i = 0; i < query; i++){
        cin >> input[i];
    }

    for(auto v: input){
        int odd = getIndice(v, 0, false);
        int even = getIndice(v, 0, true);
        string result = "";
        while (odd != -1 || even != -1){
            if(odd == -1 || even == -1){
                if(odd == -1){
                    result += v[even];
                    even = getIndice(v, (even + 1), true);
                }
                else{
                    result += v[odd];
                    odd = getIndice(v, (odd + 1), false);
                }
            }else{
                if((int)v[odd] < (int)v[even]){
                    result += v[odd];
                    odd = getIndice(v, (odd + 1), false);
                }else{
                    result += v[even];
                    even = getIndice(v, (even + 1), true);
                }
            }
        }
  
        cout << result << endl;
    }

}