#include<bits/stdc++.h>
using namespace std;

class MinStack {
public:
    MinStack() {
       
    }
    stack<int> s;
    int minEle=0;  //Ensuing min Element only for MIN_STACK

    void push(int val) {
        if(s.empty()){
            s.push(val);
            minEle = val;
        }
        else{
            if(val<=minEle){
                s.push(val);
                minEle=val;
            }
            else{
                s.push(val);
            }
        }
    }
    
    void pop() {
        if(!s.empty()){
            int t = s.top();
            s.pop();
            if(t == minEle){ // if popped element was min, update minEle
                if (!s.empty()) {
                    minEle = s.top();
                    s.pop(); // pop the previous minEle off the stack
                } else {
                    minEle = INT_MAX;
                }
            }
        }
    }
    
    int top() {
        if(!s.empty()){
            return s.top();  
        }
        return 0;
    }
    
    int getMin() {
        if (!s.empty()){
            return minEle;
        }
        return 0;
        
    }
};


int main(){
    MinStack m ;
}
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */