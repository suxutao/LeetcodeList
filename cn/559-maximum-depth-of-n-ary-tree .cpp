#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)

// Definition for a Node.
//class Node {
//public:
//    int val;
//    vector<Node*> children;
//
//    Node() {}
//
//    Node(int _val) {
//        val = _val;
//    }
//
//    Node(int _val, vector<Node*> _children) {
//        val = _val;
//        children = _children;
//    }
//};


class Solution {
public:
    int maxDepth(Node* root) {
        if (root== nullptr)
            return 0;
        if (root->children.empty())
            return 1;
        int temp=0;
        for (Node* i:root->children) {
            temp= max(temp, maxDepth(i));
        }
        return 1+temp;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}