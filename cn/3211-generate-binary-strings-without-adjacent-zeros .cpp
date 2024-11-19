#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int n;
    vector<string>v;
    string s;
    void dfs(int pos){
        if (pos==n){
            v.push_back(s);
            return;
        }
        if (pos&&s.back()=='0'){
            s.push_back('1');
            dfs(pos+1);
            s.pop_back();
        }else{
            s.push_back('1');
            dfs(pos+1);
            s.pop_back();
            s.push_back('0');
            dfs(pos+1);
            s.pop_back();
        }
    }
    vector<string> validStrings(int n) {
        this->n=n;
        dfs(0);
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}