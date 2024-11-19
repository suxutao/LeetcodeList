#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool pan(map<char,int>&m1,map<char,int>&m2){
        for (const auto &i: m1){
            if (m2[i.first]<i.second)
                return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        map<char,int>m1;
        map<char,int>m2;
        pair<int,int> ans;
        for (int i = 0; i < t.size(); ++i) {
            m1[t[i]]++;
        }
        int left=0,right,ge=INT_MAX;
        while (left<s.size()&&!m1[s[left]])
            left++;
        right=left;
        while (right<s.size()&&left<s.size()){
            m2[s[right]]++;
            if (pan(m1,m2)){
                if (right-left+1<ge){
                    ge=right-left+1;
                    ans=make_pair(left,ge);
                }
                m2[s[right]]--;
                m2[s[left++]]--;
                while (pan(m1,m2)){
                    m2[s[left++]]--;
                }
            }else {
                right++;
            }
        }
        return s.substr(ans.first,ans.second);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}