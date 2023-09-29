#include<iostream>
#include<queue>

using namespace std;

class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        if(empty()) return -1;
        int i = q.size()-1;
        while(i){
            q.push(q.front());
            q.pop();
            i--;
        }
        int x = q.front();
        q.pop();
        return x;
    }
    
    int top() {
        if(empty()) return -1;
        int i = q.size()-1;
        while(i){
            q.push(q.front());
            q.pop();
            i--;
        }
        int x = q.front();
        q.push(q.front());
        q.pop();
        return x;
    }
    
    bool empty() {
        if(q.size()==0) return true;
        else return false;
    }
};

