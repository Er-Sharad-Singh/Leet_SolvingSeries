#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int firstStableIndex(std::vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return -1;

        // 1. Suffix Minimum Array banao (Right se Left traverse karke)
        std::vector<int> suffixMin(n);
        suffixMin[n - 1] = nums[n - 1];
        for (int j = n - 2; j >= 0; j--) {
            suffixMin[j] = std::min(suffixMin[j + 1], nums[j]);
        }

        // 2. Single Pass me Prefix Max check karo aur Result nikal lo
        int prefixMax = INT_MIN;
        for (int i = 0; i < n; i++) {
            prefixMax = std::max(prefixMax, nums[i]);
            
            // Check condition: (0...i ka MAX) - (i...n-1 ka MIN) <= k
            if (prefixMax - suffixMin[i] <= k) {
                return i;
            }
        }

        return -1;
    }
};