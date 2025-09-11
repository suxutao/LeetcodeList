#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        int mx=0,r=0;
        string temp,ans;
        unordered_set<string>s(banned.begin(),banned.end());
        unordered_map<string,int>m;
        transform(paragraph.begin(),paragraph.end(),paragraph.begin(),::tolower);
        while (r<paragraph.size()) {
            temp.clear();
            while (r<paragraph.size()&&paragraph[r]<='z'&& paragraph[r]>='a'){
                temp.push_back(paragraph[r++]);
            }
            if (!s.contains(temp)){
                ++m[temp];
            }
            while (r<paragraph.size()&&(paragraph[r]>'z'|| paragraph[r]<'a')){
                ++r;
            }
        }
        for (auto &[_,a]: m){
            if (a>mx){
                mx=a;
                ans=_;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}