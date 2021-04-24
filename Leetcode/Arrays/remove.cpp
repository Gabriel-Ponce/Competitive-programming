#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    vector<int> rnums;
    for (int i = 0; i < nums.size(); i++) {

        if (nums[i] != val) {
            rnums.push_back(nums[i]);
        }

    }      
        nums = rnums;
    return rnums.size();
    }

};


int main() {

return 0;

}