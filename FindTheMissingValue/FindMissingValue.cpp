#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int length, temp;
    cin >> length;
    int ar[length];
    
    for(int i = 0; i < length; i++){
        ar[i] = 0;
    }
    
    for(int i = 0; i < length - 1; i++){
        cin >> temp;
        ar[temp - 1] = 1;
    }
    
    for(int i = 0; i < length; i++){
        if(ar[i] == 0){
            cout << i + 1 << endl;
            break;
        }
    }
    
    return 0;
}
