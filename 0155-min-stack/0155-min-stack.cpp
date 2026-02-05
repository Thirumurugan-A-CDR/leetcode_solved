class MinStack {
    vector<int> sol;
    int top1;
public:
    MinStack() {
       top1=-1;
    }
    
    void push(int val) {
        sol.push_back(val);
        top1++;
    }
    
    void pop() {
        if(top1<0) return;
        sol.pop_back();
        top1--;
    }
    
    int top() {
        if(top1<0) return -1;
        return sol[top1];
    }
    
    int getMin() {
        int min=INT_MAX;
        for(int val:sol)
        {
            if(val<min)
            {
                min=val;
            }
        }
        return min;
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