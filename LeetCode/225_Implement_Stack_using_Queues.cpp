class MyStack {
private:
queue<int> q1;
queue<int> q2;

public:
    MyStack() {  
    }
    void push(int x) {
        if(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        q2.push(x); 
    }
    
    int pop() {
        int ans=q2.front();
        q2.pop();
        if(!q1.empty()){
            q2.push(q1.back());
        int temp=q1.back();
        while(temp!=q1.front()){
            q1.push(q1.front());
            q1.pop();
        }
        q1.pop();
        }
        return ans;
    }
    
    int top() {
        return q2.front();
        
    }
    
    bool empty() {
        return q2.empty()&&q1.empty();
    }
};
