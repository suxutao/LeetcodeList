#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<string>>vv;
    vector<string>v;
    bool huiwen(string s){
        if (s.empty())
            return false;
        int l=0,r=s.length()-1;
        while(l<r){
            if (s[l]!=s[r])
                return false;
            l++;r--;
        }
        return true;
    }
    void hui(string s,int pos){
        if (pos==s.length()){
            vv.push_back(v);
            return;
        }
        for (int j = 1; j <= s.length()-pos; ++j) {
            if (huiwen(s.substr(pos,j))){
                v.push_back(s.substr(pos,j));
                hui(s,pos+j);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        if (s.length()==1)
            return {{s}};
        hui(s,0);
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}