class Solution {
public:
    int tribonacci(int n) {
        int a=0;
        int b=1;
        int c=1;
        long d=a+b+c;
        if(n==0){
            return 0;
        }
        if(n==1 || n==2){
            return 1;
        }
        for(int i=1;i<n-1;i++){
            d=a+b+c;
            a=b;
            b=c;
            c=d;
        }
        return c;
    }
};