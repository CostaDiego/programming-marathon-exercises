#include <bits/stdc++.h>

using namespace std;

uint32_t baseNumber = 0, power2 = 0;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> baseNumber >> power2;

    if (power2 > baseNumber){
        cout << "NO" << endl;
        return 0;
    }

    vector <int> nums (power2);
    vector <int>::iterator it = nums.begin();
    fill(nums.begin(), nums.end(), 1);

    unsigned int acc = accumulate(nums.begin(), nums.end(), 0);

    while(acc < baseNumber){
        *it = *it << 1;

        acc = accumulate(nums.begin(), nums.end(), 0);

        ++it;
        if(it == nums.end()){
            it = nums.begin();
        }
    }
    if(acc > baseNumber){
        cout << "NO" << endl;
        return 0;
    }else{
        cout << "YES" << endl;
        for(it = nums.begin(); it != nums.end(); ++it){
            cout << *it << " ";
        }
        cout << endl;

        return 0;
    }
}