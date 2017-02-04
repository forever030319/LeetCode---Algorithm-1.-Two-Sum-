class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        int temp;
        while(x){
            temp = ans*10 + x%10;
            if(temp/10 != ans)
                return 0;
            ans = temp;
            x = x/10;
        }
        return ans;
    }
};
