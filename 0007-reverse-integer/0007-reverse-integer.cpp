class Solution {
public:
    int reverse(int x) {
        long long temp = x;
        long long sum = 0;

        if (temp < 0) {
            temp = -temp;
        }

        while (temp > 0) {
            sum = sum * 10 + temp % 10;
            temp /= 10;
        }

        if (x < 0) {
            sum = -sum;
        }

        // 32-bit integer range check
        if (sum > INT_MAX || sum < INT_MIN) {
            return 0;
        }

        return (int)sum;
    }
};