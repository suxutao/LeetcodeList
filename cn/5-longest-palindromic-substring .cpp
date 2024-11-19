#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length()==1)
            return s;
        tuple<int,int,int>t={0,0,1};
        vector<vector<bool>>v(s.length(),vector<bool>(s.length(),false));
        for (int i = 0; i < s.size(); ++i) {
            v[i][i]=true;
        }
        for (int i = s.size()-1; i >= 0; --i) {
            for (int j = i+1; j < s.size(); ++j) {
                if (s[i]==s[j]) {
                    if (j-i==1) {
                        if (j-i+1>get<2>(t)){
                            t= make_tuple(i,j,j-i+1);
                        }
                        v[i][j] = true;
                    }
                    else if (v[i+1][j-1]){
                        if (j-i+1>get<2>(t)){
                            t= make_tuple(i,j,j-i+1);
                        }
                        v[i][j]=true;
                    }
                }
            }
        }
        return s.substr(get<0>(t),get<2>(t));
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}