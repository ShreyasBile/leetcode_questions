class Solution {
public:
    bool isSameAfterReversals(int num) {
        int org=num;
        if(num==0){
            return true;
        }
        while(num%10==0){
            num=num/10;
        }
        return org==num;
    }
};