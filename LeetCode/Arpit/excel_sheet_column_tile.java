/* Link to the qus-https://leetcode.com/problems/excel-sheet-column-title/
Given a positive integer, return its corresponding column title as appear in an Excel sheet.

For example:

    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB 
    ... 
*/
class Solution {
    public String convertToTitle(int n) {
        StringBuilder s = new StringBuilder();
        while (n > 0) {
            if (n % 26 == 0) {
                s.append((char) 'Z');
                n /= 26;
                n -= 1;
            } else {
                char ch = (char) (n % 26 + 64);
                s.append(ch);
                n /= 26;
            }
        }

        return s.reverse().toString();
        }
}