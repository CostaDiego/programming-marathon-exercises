#include <bits/stdc++.h>

using namespace std;

string word;
int lower = 0;
int upper = 0;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> word;

    for (string::size_type i = 0; i < word.size(); i++) {
        if (word[i] >= 97 && word[i] <= 122){
            lower++;
        }
        else{
            upper++;
        }
    }

    if(lower < upper){
        char c;
        int i = 0;

        while (word[i]){
            c=word[i];
            putchar (toupper(c));
            i++;
        }

    }else{
        char c;
        int i = 0;

        while (word[i]){
            c=word[i];
            putchar (tolower(c));
            i++;
        }
    }
    
    return 0;
}