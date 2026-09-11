class Solution {
public:
    bool isPalindrome(int x) {

        long long reverse=0;
        int original=x;

        if(x<0){
            return false;
        }

        while(x!=0){
            int digit=x%10;
            x=x/10;
            reverse=reverse*10+digit;
        }
        
        return reverse==original;
    }
};
