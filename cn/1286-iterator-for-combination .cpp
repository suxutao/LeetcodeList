#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class CombinationIterator {
public:
    string s,t;
    int n,cur=0;
    vector<string>v;
    void dfs(int pos){
        if (t.size()==n){
            v.push_back(t);
            return;
        }
        for (int i = pos; i < s.size(); ++i) {
            t.push_back(s[i]);
            dfs(i+1);
            t.pop_back();
        }
    }
    CombinationIterator(string characters, int combinationLength) {
        s=characters;
        n=combinationLength;
        dfs(0);
    }
    
    string next() {
        return v[cur++];
    }
    
    bool hasNext() {
        return cur<v.size();
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}