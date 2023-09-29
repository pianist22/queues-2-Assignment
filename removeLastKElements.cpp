#include<iostream>
#include<queue>

using namespace std;

void display(queue<int> &q){
    int s = q.size();
    while(s){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
        s--;
    }
    cout<<endl;
}

void removeKElements(queue<int> &q ,int k){
    queue<int> hp;
    int n= q.size();
    while(q.size()){
        hp.push(q.front());
        q.pop();
    }
    for(int i=1;i<=n-k;i++){
        q.push(hp.front());
        hp.pop();
    }
    
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    display(q);

    removeKElements(q,2);

    display(q);
    return 0;
}