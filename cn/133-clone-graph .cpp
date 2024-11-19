#include "../../../stdc.h"
using namespace std;
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

//leetcode submit region begin(Prohibit modification and deletion)

// Definition for a Node.
class Solution {
public:
    unordered_map<Node*,Node*>m;
    queue<Node*>q;
    Node* cloneGraph(Node* node) {
        if (!node) return nullptr;
        if (node->neighbors.empty()) return new Node(node->val);
        Node*yuan=new Node(node->val);
        q.emplace(node);
        m[node]=yuan;
        while (!q.empty()){
            Node*p=q.front();
            q.pop();
            for (auto &i: p->neighbors){
                if (!m[i]){
                    Node*New=new Node(i->val);
                    m[p]->neighbors.emplace_back(New);
                    m[i]=New;
                    q.push(i);
                }else{
                    m[p]->neighbors.emplace_back(m[i]);
                }
            }
        }
        return yuan;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}