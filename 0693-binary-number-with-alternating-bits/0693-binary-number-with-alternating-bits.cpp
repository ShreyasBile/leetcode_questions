class Solution {
public:
    bool hasAlternatingBits(int n) {
        int old = n & 1;
        n = n >> 1;

        while (n > 0) {
            int value = n & 1;

            if (value == old) {
                return false;
            }

            old = value;
            n = n >> 1;
        }

        return true;
    }
};