class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> xfizzBuzz;
        for(int i=1; i<=n; i++){
            if(i%3==0 && i%5==0){
                xfizzBuzz.push_back("FizzBuzz");
            }
            else if(i%3==0){
                xfizzBuzz.push_back("Fizz");
            }
            else if(i%5==0){
                xfizzBuzz.push_back("Buzz");
            }
            else{
                xfizzBuzz.push_back(to_string(i));
            }
        }
        return xfizzBuzz;
    }
};