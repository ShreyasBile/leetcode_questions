class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int x=num;
        while((x%10)!=0){
            if(num%(x%10)==0){
                count++;
            }
            x=x/10;
        }
        return count;
    }
};