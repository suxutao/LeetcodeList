#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isValidSerialization(string preorder) {
        if (preorder.size()==1)
            return preorder[0]=='#';
        if (preorder[0]=='#')
            return false;
        vector<string>v;
        stack<int>s;
        string str;
        stringstream ss(preorder);
        while (getline(ss,str,','))
            v.push_back(str);
        s.push(2);
        for (int i = 1; i < v.size(); ++i) {
            if (s.empty())
                return false;
            if (v[i]=="#"){
                s.top()--;
                if (s.top()==0)
                    s.pop();
            }else{
                s.top()--;
                if (s.top()==0)
                    s.pop();
                s.push(2);
            }
        }
        return s.empty();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}