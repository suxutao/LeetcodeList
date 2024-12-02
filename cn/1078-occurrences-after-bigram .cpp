#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        stringstream ss(text);
        string temp;
        vector<string>vs,ans;
        while (getline(ss,temp,' ')){
            vs.push_back(temp);
        }
        for (int i = 0; i < vs.size()-2; ++i) {
            if (vs[i]==first&&vs[i+1]==second){
                ans.push_back(vs[i+2]);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}