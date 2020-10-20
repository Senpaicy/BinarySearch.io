#include "solution.hpp"
using namespace std;

class Solution {
    public:
    vector<int> solve(vector<int>& lst0, vector<int>& lst1) {
        if(lst0.empty()) {
            return lst1;
        }
        if(lst1.empty()) {
            return lst0;
        }
        
        vector<int> scratch;
        size_t L = 0;
        size_t H = lst0.size();
        size_t mid = lst0.size()-1;
        
        for(size_t i = 0; i < lst1.size(); i++){
            lst0.push_back(lst1[i]);
        }
        
        for(size_t i = 0; i < lst0.size(); i++){
            if(L <= mid && ((H > lst0.size()-1) or (lst0[L] <= lst0[H]))){
                scratch.push_back(lst0[L]);
                L++;
            }
            else{
                scratch.push_back(lst0[H]);
                H++;
            }
        }
 
        return scratch;
    }
};