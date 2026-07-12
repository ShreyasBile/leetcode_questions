class Solution {
public:
    int pivotInteger(int n) {
        int sum=(n*(n+1))/2;
        int lsum=0;
        int rsum=0;
        for(int i=1; i<=n; i++){
            lsum=lsum+i;
            rsum=0;
            for(int j=i; j<=n; j++){
                rsum=rsum+j;
            }
            if(lsum==rsum){
                return i;
            }
        }
        return -1;
    }
};