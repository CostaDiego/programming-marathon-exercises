#include <bits/stdc++.h>
using namespace std;
string firstLine;
string secondLine;

vector <int> countFst(26);
vector <int> countSec(26);

int result = 0;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> firstLine >> secondLine;

    size_t i;
    for ( i = 0; i < secondLine.size(); i++){
        countSec[secondLine[i] - 'a']++;
    }

    for (size_t j = 0; j < secondLine.size() - 1; j++){        
        if (firstLine[j] == '?'){
            continue;
        }
        else{
            countFst[firstLine[j] - 'a']++;
        }
    }


    for ( i ; i < firstLine.size(); i++){
        cout << i << endl;
        if(firstLine[i] != '?')
        countFst[firstLine[i] - 'a']++;

        bool add = true;

        for(size_t j = 0; j < secondLine.size(); j++){
            if (secondLine[j] >= firstLine[j]){
                continue;
            }else{
                add = false;
                break;
            }
        }

        if (add){
            result++;
        }

        countFst[firstLine[i] - 'a']--;
    }

    cout << result << endl;

    return 0;
}