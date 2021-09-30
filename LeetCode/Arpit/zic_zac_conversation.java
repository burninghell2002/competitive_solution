/*
https://leetcode.com/problems/zigzag-conversion/

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
*/
class Solution {
   static int posToStart = 0;
    Solution(){
        posToStart=0;

    }


    public static String Printer(String s, int a, int b) {
        int charPosToBePrinted = posToStart;
        String stud = "";
        int i;
        for (i = 0; charPosToBePrinted < s.length(); i++) {
            stud = stud + (s.charAt(charPosToBePrinted));
            if (i % 2 == 0) {
                if (a != 0) {
                    charPosToBePrinted += a;
                } else {
                    charPosToBePrinted += b;
                }
            } else {
                if (b != 0) {
                    charPosToBePrinted += b;
                } else {
                    charPosToBePrinted += a;
                }
            }
        }
        return stud;
    }

    public static String convert(String s,int numRows) {
        if(numRows==1){
            return s;
        }
        String ans="";
        int n = numRows;
        int a = 2 * (n - 1);
        int b = 0;
        while (a >= 0) {
            ans=ans+Printer(s, a, b);
            posToStart++;
            a -= 2;
            b += 2;
        }
        System.out.println(ans);
        return ans;
    }
}
