class Solution {
public:
    int sum(int num,int sum1){
        if(num==0) return sum1;
         return sum(num/10,sum1+(num%10));
    }
    int addDigits(int num) {
        if (num < 10)
            return num;
        int sum1 =0;
        sum1 = sum(num, sum1);
         return addDigits(sum1);
    }
};