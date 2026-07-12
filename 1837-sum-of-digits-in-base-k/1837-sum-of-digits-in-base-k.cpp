class Solution {
public:
    int sumBase(int n, int k) {
        int newnum=0;
        while(n!=0){
            int last=n%k;
            newnum=newnum+last;
            n=n/k;
        }
        return newnum;
    }
};