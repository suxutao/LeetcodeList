#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string>let,dig;
        unordered_map<string,int>pos;
        for (auto &i: logs){
            if (i.back()>='0'&&i.back()<='9'){
                dig.push_back(i);
            }else{
                let.push_back(i);
                pos[let.back()]=let.back().find(' ')+1;
            }
        }
        ranges::sort(let,[&](string&a,string&b)->bool{
            int pa=pos[a],pb=pos[b];
            string sa=a.substr(pa),sb=b.substr(pb);
            if (sa==sb)
                return a<b;
            return sa<sb;
        });
        for (int i = 0; i < dig.size(); ++i) {
            let.push_back(dig[i]);
        }
        return let;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}