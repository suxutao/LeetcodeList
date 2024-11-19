#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if (root==NULL)
            return NULL;
        queue<Node*>q;
        q.push(root);
        Node*p;
        while (!q.empty()){
            int s=q.size();
            for (int i = 0; i < s; ++i) {
                p=q.front();
                if (p->left){
                    q.push(p->left);
                }
                if (p->right){
                    q.push(p->right);
                }
                q.pop();
                p->next=i==s-1?NULL:q.front();
            }
        }
        return root;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}