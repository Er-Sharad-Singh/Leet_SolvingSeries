class Solution {
public:
    vector<int> getConcatenation(vector<int>& arr) {
        int len = arr.size();
        int retlen = 2 * len;

        // Create a vector of size retlen
        vector<int> newarr(retlen);

        // Fill the new array
        for (int i = 0; i < retlen; i++) {
            newarr[i] = arr[i % len]; // Repeat elements
        }

        return newarr;
    }
};

