class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	multimap<int, int> list;
    	for(int i=0;i<n;i++)
    	    list.insert({arr[i],0});
        for(int i=0;i<n;i++)
            list.insert({dep[i], 1});
    
    	int count=0, result = 0;
    	for(auto i= list.begin();i!=list.end();i++)
    	{
    	    if((*i).second==0)
    	    count++;
    	    else if((*i).second==1)
    	    count--;
    	    
    	    if(count>result)
    	    result = count;
    	}
    	return result;
    }
};
