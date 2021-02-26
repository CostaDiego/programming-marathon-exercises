#include <iostream>

using namespace std;

int main(){
    int n;
    int h;
    string row;

    cin >> n;
    cin >> h;

    int width = 0;

    for(int i = 0; i < n; i++){
        int temp;

        cin >> temp;

        if (temp > h){
            width += 2;
        }
        else{
            width += 1;
        }

    }
    
    cout << width << endl;
}