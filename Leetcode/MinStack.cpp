class MinStack {
public:
//int c = 0;
int mini;
//int perv = -1;
stack<int> s;
stack<int> small;
    MinStack() {
        
    }
    
    void push(int val) {
       if (small.empty())
       {
           mini = val;
       }
       else
       {
           mini = small.top();
           mini = min(mini, val);
       }
       s.push(val);
       small.push(mini);
    }
    
    void pop() {
      small.pop();
       s.pop(); 
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return small.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

// -----------------------------------------------------------------------------------------------------------------------
// I used two stacks the first is the main stack and the second is to indicate the mniimum
// first           second
// |    8  |       |   1   |
// |    1  |       |   1   |
// |    2  |       |   2   |
// |    4  |       |   3   |
// |    5  |       |   3   |
// |    3  |       |   3   |
// |-------|       |-------|

// so when I push(3) the min is 3 and when I push(5) the min is 3 and so on


// at using pop(8) it will pop(1) from the second stack too
// first           second
// |    1  |       |   1   |
// |    2  |       |   2   |
// |    4  |       |   3   |
// |    5  |       |   3   |
// |    3  |       |   3   |
// |-------|       |-------|

// at using pop(1) it will pop(1) from the second stack too
// first           second
// |    2  |       |   2   |
// |    4  |       |   3   |
// |    5  |       |   3   |
// |    3  |       |   3   |
// |-------|       |-------|
// and so on

// why I used "mini = small.top();" at line 19? for example 
// first           second
// |    1  |       |   1   |
// |    2  |       |   2   |
// |    4  |       |   3   |
// |    5  |       |   3   |
// |    3  |       |   3   |
// |-------|       |-------|
// I do pop(1) from the first then it will pop(1) at the second too so the min val in the main stack is 2 so I used it
