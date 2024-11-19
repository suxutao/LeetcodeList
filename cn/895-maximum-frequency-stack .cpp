#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class FreqStack {
public:
    vector<stack<int>>v;
    unordered_map<int,int>m;
    FreqStack() {

    }
    
    void push(int val) {
        ++m[val];
        if (m[val]>v.size())
            v.push_back({});
        v[m[val]-1].push(val);
    }
    
    int pop() {
        int ans=v.back().top();
        --m[ans];
        v.back().pop();
        if (v.back().empty())
            v.pop_back();
        return ans;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}