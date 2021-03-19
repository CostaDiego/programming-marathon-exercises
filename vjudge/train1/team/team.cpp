#include <bits/stdc++.h>

using namespace std;

int friends = 3;
int num_problems = 0;
int result = 0;


int main(){
    cin >> num_problems;

    int matrix[num_problems][friends];

    for(int i = 0; i < num_problems; i++){
        for(int j = 0; j < friends; j++){
            cin >> matrix[i][j];
        }
    }
    
    for(int i = 0; i < num_problems; i++){
        int agree = 0;
        for(int j = 0; j < friends; j++){
           if (matrix[i][j] == 1){
               agree++;
           }
        }

        if (agree >= 2){
            result++;
        }
    }

    cout << result << endl;

    
    return 0;
}