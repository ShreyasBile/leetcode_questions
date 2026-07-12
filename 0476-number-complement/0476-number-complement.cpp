class Solution {
public:
    int findComplement(int num) {
        long new1=0;
        long factor=1;
        if(num==0){
            return 1;
        }
        while(num>0){
            if((num&1)==0){
                new1=new1+(factor*1);
            }
            else{
                new1=new1+(factor*0);
            }
            factor=factor*2;
            num=num>>1;
        }
        return new1;
    }
};