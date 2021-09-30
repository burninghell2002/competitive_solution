
class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       int n=S.length();
       char ch = '$';
    
       for(int i=0;i<n;i++)
       {
           char a = S[i];
           string s1 = S.substr(0,i);
           string s2 = S.substr(i+1);
           if(s1.find(a) == string::npos && s2.find(a) == string::npos)
           {
               ch =a;
               break;
               
           }
       }
       return ch;
       
    }

};
