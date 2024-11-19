#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string>vs;
    string s;
    void dfs(int n,int l,int r){
        if (l>n||r>n)
            return;
        if (s.size()==n*2){
            vs.push_back(s);
            return;
        }
        if (l==r){
            s.push_back('(');
            dfs(n,l+1,r);
            s.pop_back();
        }else{
            s.push_back('(');
            dfs(n,l+1,r);
            s.pop_back();
            s.push_back(')');
            dfs(n,l,r+1);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        dfs(n,0,0);
        return vs;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}