class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> ans(temp.size());
   stack<pair<int,int>> s;
   s.push({temp[0],0});
   for (int i = 1;i < temp.size(); i++)
   {
       int x = temp[i];
       if(x > s.top().first)
       {
          while(!s.empty() && x > s.top().first)
          {
              ans[s.top().second] = i - s.top().second;
              s.pop();
          }
          s.push({x, i});
       }
       else
       {
            s.push({x, i});
       }
   }
   ans[temp.size() - 1] = 0;

    return ans;
    }
};
//--------------------------------------------------------------------------------------------------------------


/*

i used a monotonic decraesing stack => it means                  |71|<= the top or peek
                                                                 |71|
                                                                 |72|
                                                                 |73| 
                                                                 ----
i have some numbers that decrased and redundant allowed 



here in my solution 

for example I have  temp = [73,74,75,71,69,72,76,73]
                     ans = [  ,  ,  ,  ,  ,  ,  ,  ] at the first

I have stack that have the temprature ans the index of it 
in the start i push {73 , 0}
s = |73, 0|
    ----
in for loop 
at i = 1
x = 74 
if(74 > 73)
the ans[i - s.top().second]
till
finsih every number smaller than it in stack 
then push 74
s = |73, 0|
    -------
    







*/