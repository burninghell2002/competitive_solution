
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int k = pat.size();
	    map<char, int> m;
	    
	    for(int i=0;i<k;i++)
	    {
	        if(m.find(pat[i])==m.end())
	        m.insert({pat[i],1});
	        
	        else m[pat[i]]++;
	    }
	    
	    int i=0,j=0;
	    int n= txt.size();
	    int ans = 0;
	    int count = m.size();
	    
	    while(j<n)
	    {   
	        if(m.find(txt[j])!=m.end())
	        {
	            m[txt[j]]--;
	            
	            if(m[txt[j]]==0)
	            count--;
	        }
	        
	        if(j-i+1<k)
	        j++;
	        
	        else if(j-i+1==k)
	        {
	            if(count==0)
	            ans++;
	            
	            if(m.find(txt[i])!=m.end())
	            {   
	                m[txt[i]]++;
	                
	                if(m[txt[i]]==1)
	                count++;
	            }
	            i++;
	            j++;
	        }
	    }
	    return ans;
	}

};
