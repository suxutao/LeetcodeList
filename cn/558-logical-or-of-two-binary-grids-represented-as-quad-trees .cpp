#include "../../../stdc.h"
using namespace std;
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;

    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }

    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }

    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
//leetcode submit region begin(Prohibit modification and deletion)
/*
// Definition for a QuadTree node.

*/

class Solution {
public:
    Node* intersect(Node* quadTree1, Node* quadTree2) {
        if (quadTree1->isLeaf&&quadTree2->isLeaf){
            return new Node(quadTree1->val|quadTree2->val,1);
        }else if (quadTree1->isLeaf||quadTree2->isLeaf){
            if (quadTree1->isLeaf){
                if (quadTree1->val)
                    return quadTree1;
                else
                    return quadTree2;
            }else{
                if (quadTree2->val)
                    return quadTree2;
                else
                    return quadTree1;
            }
        }else{
            Node*p=new Node;
            p->bottomLeft= intersect(quadTree1->bottomLeft,quadTree2->bottomLeft);
            p->bottomRight= intersect(quadTree1->bottomRight,quadTree2->bottomRight);
            p->topLeft= intersect(quadTree1->topLeft,quadTree2->topLeft);
            p->topRight= intersect(quadTree1->topRight,quadTree2->topRight);
            if (p->bottomLeft->val&&p->bottomRight->val&&p->topRight->val&&p->topLeft->val&&p->topRight->isLeaf)
                return new Node(1,1);
            return p;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}