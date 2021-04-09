#include <bits/stdc++.h>

using namespace std;

int matrix[5][5];
int row = 0;
int column = 0;

int main(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> matrix[i][j];
            if (matrix[i][j] == 1){
                row = i;
                column = j;
            }
        }
    }

    cout << abs(2-row) + abs(2-column) << endl;
    
    return 0;
}