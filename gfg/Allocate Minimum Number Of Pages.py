class Solution:
    def ispossible(self,arr,mid,m):
        student=1
        sum=0
        for i in arr:
            sum+=i
            if sum>mid:
                student+=1
                sum=i
        return student<=m
    
    #Function to find minimum number of pages.
    def findPages(self,arr, n, m):
        low,high=max(arr),sum(arr)
        res=0
        while(low<=high):
            mid=low+(high-low)//2
            if(self.ispossible(arr,mid,m)==True):
                res=mid
                high=mid-1
            else:
                low=mid+1
        return res
        

