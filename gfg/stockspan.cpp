class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector<int> v;
       stack<pair<int, int> > s;
       
       for(int i=0; i<n; i++)
       {
           if(s.size()==0)
           v.push_back(-1);
           
           else if(s.size()>0 && s.top().first > price[i])
           v.push_back(s.top().second);
           
           else if(s.size()>0 && s.top().first <= price[i])
           {
               while(s.size()>0 && s.top().first <= price[i])
               s.pop();
               
               if(s.size()==0)
               v.push_back(-1);
               
               else if(s.top().first > price[i])
               v.push_back(s.top().second);
           }
           
           s.push({price[i], i});
       }
       
       for(int i=0; i<n ;i++)
       v[i] = i - v[i];
       
       return v;
    }
};class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector<int> v;
       stack<pair<int, int> > s;
       
       for(int i=0; i<n; i++)
       {
           if(s.size()==0)
           v.push_back(-1);
           
           else if(s.size()>0 && s.top().first > price[i])
           v.push_back(s.top().second);
           
           else if(s.size()>0 && s.top().first <= price[i])
           {
               while(s.size()>0 && s.top().first <= price[i])
               s.pop();
               
               if(s.size()==0)
               v.push_back(-1);
               
               else if(s.top().first > price[i])
               v.push_back(s.top().second);
           }
           
           s.push({price[i], i});
       }
       
       for(int i=0; i<n ;i++)
       v[i] = i - v[i];
       
       return v;
    }
};