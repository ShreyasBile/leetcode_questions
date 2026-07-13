class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even=0;
        int odd=0;
        int m=n;
        while(n>0){
            if(n&1){
                even++;
            }
            n=n>>2;
        }
        m=m>>1;
        while(m>0){
            if(m&1){
                odd++;
            }
            m=m>>2;
        }
        return {even,odd};
    }
};