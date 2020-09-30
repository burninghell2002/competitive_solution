/*
Given a 32-bit signed integer, reverse digits of an integer.
Example 1:
Input: 123
Output: 321
Example 2:
Input: -123
Output: -321
Example 3:
Input: 120
Output: 21
Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
*/
class ReverseInteger {
    public int reverse(int x) {
        long c=0;
        boolean f = false;
        int y=x;
        if(y<0){
            x = -1*y;
            f = true;
        }
        while(x>0){
            c = c*10 + x%10;
            x = x/10;
        }
        if(f){
            c = -1*c;
        } 
        if( c<-2147483648 || c> 2147483647){
            c = 0;
        }
        
        return (int)c;
    }
}
