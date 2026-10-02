// class Solution {
// public:
//     bool checkPerfectNumber(int num) {
//         int sum=1;
//         for(int i=2;i<=num;i++){
//            if(num%i==0){
//             sum=sum+i;
//            } 
//         }
//         if(num==(sum-num)) return true;
//         else return false;
//     }
// };


class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        for(int i=1;i<sqrt(num);i++){
           if(num%i==0){
            sum=sum+i;
            sum=sum+(num/i);
           } 
        }
        if(num==(sum-num)) return true;
        else return false;
    }
};