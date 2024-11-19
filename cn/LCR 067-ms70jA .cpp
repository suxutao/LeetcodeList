#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    struct node{
        int flag,children[2];
    };
    int ans=0,cnt=1;
    vector<node>tree;
    int find_max(int x){
        int now=0,an=0;
        for (int i = 30; i >= 0; --i) {
            int bit=(x>>i)&1;
            if (tree[now].children[!bit]) {
                now = tree[now].children[!bit];
                an|=1<<i;
            }else{
                now = tree[now].children[bit];
            }
        }
        return an;
    }
    void insert_tree(int x){
        int now=0;
        for (int i = 30; i >= 0; --i) {
            int bit=(x>>i)&1;
            if (!tree[now].children[bit])
                tree[now].children[bit]=cnt++;
            now=tree[now].children[bit];
        }
    }
    int findMaximumXOR(vector<int>& nums) {
        if (nums.size()==1)
            return 0;
        tree.resize(nums.size()*31);
        for (int i = 1; i < nums.size(); ++i) {
            insert_tree(nums[i-1]);
            ans= max(ans,find_max(nums[i]));
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}