class Solution {
public:
    int bitwiseComplement(int n) {
        int factor=1;
        int ans=0;
        if(n==0){
            return 1;
        }
        while(n>0){
            int value=((n&1)==0);
            ans=ans+(factor*value);
            factor=factor*2;
            n=n>>1;
        }
        return ans;
    }
};