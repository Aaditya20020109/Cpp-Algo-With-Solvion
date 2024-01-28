class MinStack {
public:
stack<int> s;
stack<int> min_stack;

    MinStack() {
        stack<int> st;

        s = st;
        min_stack = st;

        
    }
    
    void push(int val) {
        if(s.empty())
        {
            s.push(val);
            min_stack.push(val);
        }
        else
        {
            s.push(val);
            if(s.top()<min_stack.top())min_stack.push(s.top());
            else min_stack.push(min_stack.top());
            
        }


    }
    
    void pop() {
        if(s.empty())return;
        s.pop();
        min_stack.pop();
    }
    
    int top() {
        return s.top();

        
    }
    
    int getMin() {
        return min_stack.top();
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