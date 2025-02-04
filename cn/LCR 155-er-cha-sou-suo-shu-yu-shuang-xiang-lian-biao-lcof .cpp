#include "../../../stdc.h"
using namespace std;
class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    Node*pre= nullptr,*head=nullptr;
    void dfs(Node*p){
        if (!p)
            return;
        dfs(p->left);
        if (pre)
            pre->right=p;
        else
            head=p;
        p->left=pre;
        pre=p;
        dfs(p->right);
    }
    Node* treeToDoublyList(Node* root) {
        if (!root)
            return root;
        dfs(root);
        head->left=pre;
        pre->right=head;
        return head;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}