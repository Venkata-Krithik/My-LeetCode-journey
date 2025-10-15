//The most efficient way I could solve this problem was using a hashmap to track the min element for each new push and store it
class MinStack {
public:
int min=INT_MAX;
unordered_map<int,int> map;
int count=0;
stack<int> m;
    MinStack() {
       // return m;
    }
    
    void push(int val) {
        count++;
        if(count==1)
        {
            map[count]=val;
        }
        else
        {
            if(val<map[count-1]) map[count]=val;
            else map[count]=map[count-1];
        }     
        m.push(val);
    }
    
    void pop() {
        count--;
        m.pop();

    }
    
    int top() {
        return m.top();
    }
    
    int getMin() {
        return map[count];
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
