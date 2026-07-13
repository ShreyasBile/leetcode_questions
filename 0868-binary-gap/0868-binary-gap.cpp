class Solution {
public:
    int binaryGap(int n) {
        int count = -1;
        int ans = 0;

        while (n > 0) {
            if (n & 1) {
                if (count != -1) {
                    ans = max(ans, count);
                }
                count = 1;
            }
            else {
                if (count != -1) {
                    count++;
                }
            }

            n = n >> 1;
        }

        return ans;
    }
};