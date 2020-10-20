#include "solution.hpp"
using namespace std;

class Solution {
    public:
    string solve(string s) {
        string z = "";
        z += s[0];
        for(int i = 1; i < s.size(); i++){
            if(s[i] != s[i-1]){
                z+=s[i];
            }
        }
        
        return z;
    }
};
