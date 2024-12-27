#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int n;
    string s;
    vector<string>vs;
    void dfs(int pos,char pre){
        if (pos==n){
            vs.push_back(s);
            return;
        }
        if (pre!='a'){
            s.push_back('a');
            dfs(pos+1,'a');
            s.pop_back();
        }
        if (pre!='b'){
            s.push_back('b');
            dfs(pos+1,'b');
            s.pop_back();
        }
        if (pre!='c'){
            s.push_back('c');
            dfs(pos+1,'c');
            s.pop_back();
        }
    }
    string getHappyString(int n, int k) {
        this->n=n;
        dfs(0,'d');
        return vs.size()<k?"":vs[k-1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}