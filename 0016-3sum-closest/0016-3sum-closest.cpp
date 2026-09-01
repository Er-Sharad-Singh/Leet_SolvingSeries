class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); // Sort for two-pointer approach
        int n = nums.size();
        int closestSum = 0;
        int minDiff = INT_MAX;

        for (int i = 0; i < n - 2; i++) {
            // Skip duplicate fixed elements
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int j = i + 1, k = n - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                int diff = abs(sum - target);

                // Update closest sum if we found a better one
                if (diff < minDiff) {
                    minDiff = diff;
                    closestSum = sum;
                }

                // Move pointers based on comparison
                if (sum < target) {
                    j++;
                } else if (sum > target) {
                    k--;
                } else {
                    // Exact match found
                    return target;
                }
            }
        }
        return closestSum;
    }
};

