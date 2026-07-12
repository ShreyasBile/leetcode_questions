class Solution {
public:
    int fib(int n) {
        int a=0;
        int b=1;
        int newnum=1;
        if(n==0){
            return 0;
        }
        while(n-1>0){
            newnum=a+b;
            a=b;
            b=newnum;
            n--;
        }
        return newnum;
    }
};