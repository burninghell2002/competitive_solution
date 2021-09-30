class Solution:
    def makeLargestSpecial(self, s: str) -> str:
        l=r=0
        res=[]
        for i in range(len(s)):
            if s[i]=='0':
                r-=1
            else:
                r+=1
            if r == 0:
                res.append("1"+self.makeLargestSpecial(s[l+1:i])+"0")
                l=i+1
        res.sort(reverse=True)
        return "".join(res)