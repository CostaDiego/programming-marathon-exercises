#include <iostream>

using namespace std;

int gamesPlayed;
string results;
int winner[2];

int main(){

    cin >> gamesPlayed;
    cin >> results;

    int i = 0;
    while (results[i])
    {
        if (results[i] == 'A'){
            winner[0] += 1;
        }

        if (results[i] == 'D'){
            winner[1] += 1;
        }
        
        i++;
    }

    if (winner[0] > winner[1])
    {
        cout << "Anton" << endl;
    }

    else if (winner[0] < winner[1])
    {
        cout << "Danik" << endl;
    }

    else
    {
        cout << "Friendship" << endl;
    }
    

    return 0;
}