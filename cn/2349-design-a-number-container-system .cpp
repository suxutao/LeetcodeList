#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class NumberContainers {
public:
    unordered_map<int,int>m;
    unordered_map<int,priority_queue<int,vector<int>,greater<>>>q;
    NumberContainers() {

    }
    
    void change(int index, int number) {
        m[index]=number;
        q[number].push(index);
    }
    
    int find(int number) {
        while (!q[number].empty()&&m[q[number].top()]!=number){
            q[number].pop();
        }
        return q[number].empty()?-1:q[number].top();
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}