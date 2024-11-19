#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string decodeString(string s) {
        string ans;
        vector<string>st;
        stack<int>si;
        for (int i = 0; i < s.size(); ++i) {
            string tem;
            while (i<s.size()&&islower(s[i])){
                tem.push_back(s[i++]);
            }
            if (!tem.empty()) {
                st.push_back(tem);
            }
            if (i==s.size()){
                break;
            }

            int temp=0;
            while (i<s.size()&&isdigit(s[i])){
                temp=temp*10+s[i++]-'0';
            }
            if (temp)
                si.push(temp);

            if (s[i]==']'){
                string str,aaa;
                int num=si.top();si.pop();
                while (st.back()!="["){
                    aaa=st.back()+aaa;
                    st.pop_back();
                }
                for (int j = 0; j < num; ++j) {
                    str.append(aaa);
                }
                st.pop_back();
                while (!st.empty()&&st.back()!="["){
                    str=st.back()+str;
                    st.pop_back();
                }
                st.push_back(str);
            }else{
                st.emplace_back("[");
            }
        }
        for (const auto & i : st) {
            ans+=i;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().decodeString("2[abc]3[cd]ef");
    return 0;
}