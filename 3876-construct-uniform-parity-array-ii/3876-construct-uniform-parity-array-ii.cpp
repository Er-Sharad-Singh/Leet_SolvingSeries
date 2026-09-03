class Solution {
public:
    bool uniformArray(std::vector<int>& nums1) {
        int size = nums1.size();
        int minOdd = INT_MAX;
        bool hasEven = false;
        bool hasOdd = false;

        // Step 1: Smallest odd number dhoondho aur parity check karo
        for (int i = 0; i < size; i++) {
            if (nums1[i] % 2 != 0) {
                hasOdd = true;
                if (nums1[i] < minOdd) {
                    minOdd = nums1[i];
                }
            } else {
                hasEven = true;
            }
        }

        // Agar saare numbers pehle se hi Even hain ya Odd hain
        if (!hasEven || !hasOdd) {
            return true;
        }

        // Step 2: Check karo ki kya koi even number minOdd se chhota toh nahi hai
        for (int i = 0; i < size; i++) {
            if (nums1[i] % 2 == 0 && nums1[i] < minOdd) {
                return false;
            }
        }

        return true;
    }
};