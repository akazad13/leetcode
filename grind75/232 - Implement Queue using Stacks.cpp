class MyQueue {
    stack<int> stack1, stack2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        stack1.push(x);
        return;
    }
    
    int pop() {
        if(!stack2.empty()) {
            int value = stack2.top();
            stack2.pop();
            return value;
        }
        while(!stack1.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
        int value = stack2.top();
        stack2.pop();
        return value;
    }
    
    int peek() {
        if(!stack2.empty()) {
            int value = stack2.top();
            return value;
        }
        while(!stack1.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
        int value = stack2.top();
        return value;
    }
    
    bool empty() {
        return stack1.empty() && stack2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */