#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)

// This is the interface that allows for creating nested lists.
// You should not implement it, or speculate about its implementation
//class NestedInteger {
//public:
//    // Return true if this NestedInteger holds a single integer, rather than a nested list.
//    bool isInteger() const;
//    // Return the single integer that this NestedInteger holds, if it holds a single integer
//    // The result is undefined if this NestedInteger holds a nested list
//    int getInteger() const;
//    // Return the nested list that this NestedInteger holds, if it holds a nested list
//    // The result is undefined if this NestedInteger holds a single integer
//    const vector<NestedInteger> &getList() const;
//};


class NestedIterator {
public:
    vector<int>v;int a,s;
    void dfs(vector<NestedInteger> n){
        for (auto &i: n){
            if (i.isInteger())
                v.push_back(i.getInteger());
            else
                dfs(i.getList());
        }
    }
    NestedIterator(vector<NestedInteger> &nestedList) {
        dfs(nestedList);a=0;s=v.size();
    }
    
    int next() {
        return v[a++];
    }
    
    bool hasNext() {
        return a!=s;
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}