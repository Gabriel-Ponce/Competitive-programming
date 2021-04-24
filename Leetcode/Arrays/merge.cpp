#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums;
         for(int i = 0; i < m; i++) {
             nums.push_back(nums1[i]);
         }
         for(int i = 0; i < n; i++) {
             nums.push_back(nums2[i]);
         }
         nums1 = nums;
         sort(nums1.begin(), nums1.end());
    }
};
int main() {

    return 0;
}