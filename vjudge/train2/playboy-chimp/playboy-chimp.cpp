#include <bits/stdc++.h>

using namespace std;

int sizeInputLadyChimps = 0;
int sizeInputQueries = 0;

vector <int> ladyChimps;
vector <int> queries;

vector <int>::iterator it;
vector <int>::iterator center;

int main(){

    cin >> sizeInputLadyChimps;

    int temp = 0;
    for(int i = 0; i < sizeInputLadyChimps; i++){
        cin >> temp;
        ladyChimps.push_back(temp);
    }

    cin >> sizeInputQueries;

    temp = 0;
    for (int i = 0; i <sizeInputQueries; i++){
        cin >> temp;
        queries.push_back(temp);
    }

    for(it = queries.begin(); it < queries.end(); it++){
        center = lower_bound(ladyChimps.begin(), ladyChimps.end(),*it);
        
        if (center - 1 == ladyChimps.begin()){
            cout << 'X'<<  ' ';
        }else{
            cout << *(center-1) << ' ';
        }
        while(center <= ladyChimps.end()){
            if (*center <= *it){
                center++;
            }else{
                cout << *center << endl;
                break;
            }

            if(center == ladyChimps.end()){
                cout << 'X' << endl;
                break;
            }
        }


    }

    return 0;
}