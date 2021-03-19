#include <iostream>

using namespace std;

int main()
{
    int limak, bob;

    cin >> limak >> bob;

    int cont = 0;

    while (limak <= bob)
    {
        limak = limak * 3;
        bob = bob * 2;
        cont++;
    }

    cout << cont << endl;
    
}