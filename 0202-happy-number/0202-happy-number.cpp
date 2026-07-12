class Solution {
public:
    bool isHappy(int n) {
        while(n!=1 && n!=4){
            int k=0;
            while(n>0){
                k=k+(n%10)*(n%10);
                n=n/10;
            }
            n=k;
        }
        return n==1;
    }
};