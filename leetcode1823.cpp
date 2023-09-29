#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> v(n);
        for(int i=0;i<v.size();i++){
            v[i] = i+1;
        }
        int i=0;
        while(true){
            if(v.size()==1) return v[0];
            i = (i+k-1)%v.size();
            v.erase(v.begin()+i);
        }
    }
};