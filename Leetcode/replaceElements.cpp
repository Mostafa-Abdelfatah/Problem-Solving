/*

Explanation
Iterate from the back to the start,
We initilize mx = -1, where mx represent the max on the right.
Each round, we set A[i] = mx, where mx is its mas on the right.
Also we update mx = max(mx, A[i]), where A[i] is its original value.


Complexity
Time O(N)
Space O(1)



*/



class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
         if(arr.size() == 1)
    {
        arr[0] = -1;
        return arr;
    }
    else
    {
        int mx = -1;
      for (int i = arr.size()-1; i >= 0; i--)
      {
          int a = arr[i];
          arr[i] = mx;
          mx = max(a, mx);
      }
    }

    return arr;
    }
};