class Solution {
    public:
	//funtion to check if string is valid IP or not
        int check(string str){
            
            int n= str.length();
            
            if(n==0 || n>3)
            return 0;
            
           for(int i=0;i<n;i++)
            if(!(str[i]>='0' && str[i]<='9'))
            return 0;
            
            if(str.find('0')==0 && n>1)
            return 0;
            
            stringstream t(str);
            int x;
            t >> x;
            
            return(x>=0 && x<=255);
            
            
        }
        
        int isValid(string s) {
            // code here
            int n= s.length();
            string str = "";
            int valid =1;
            for(int i=0;i<n;i++)
            {
                if(s[i]!='.')
                str += s[i];
                
                else if(check(str)==0)
                {
                    valid = 0;
                    break;
                }
                else str="";
                
            }
            if(check(str)==0)
            valid = 0;
            
            if(valid==1)
            {   int count = 0;
                for(int i=0;i<n;i++)
                if(s[i]=='.')
                count++;
                
                if(count!=3)
                valid = 0;
            }
            
            return valid;
        }
};