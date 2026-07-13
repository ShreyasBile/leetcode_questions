class Solution {
public:
    int xorOperation(int n, int start) {
        int arr[n];
        int x=0;
        for(int i=0; i<n; i++){
            int m=start+2*i;
            arr[i]=m;
        }
        for(int i=0; i<n; i++){
            x=x^arr[i];
        }
        return x;
    }
};