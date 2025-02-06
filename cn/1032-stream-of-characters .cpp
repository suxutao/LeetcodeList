#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)

class StreamChecker {
public:
    int cnt=1;
    string s;
    struct node{
        bool fin=false;
        int son[26]{};
    }t[40005];

    StreamChecker(vector<string>& words) {
        for (auto &i: words){
            int now=0;
            for (int j = i.size()-1; j >= 0; --j) {
                if (!t[now].son[i[j]-'a']){
                    t[now].son[i[j]-'a']=cnt++;
                }
                now=t[now].son[i[j]-'a'];
                if (j==0)
                    t[now].fin=true;
            }
        }
    }
    
    bool query(char letter) {
        s.push_back(letter);
        int now=0;
        for (int i = s.size() - 1; i >= 0; --i) {
            if (t[now].son[s[i]-'a']){
                now=t[now].son[s[i]-'a'];
                if (t[now].fin)
                    return true;
            }else{
                break;
            }
        }
        return false;
    }
};

/**
 * Your StreamChecker object will be instantiated and called as such:
 * StreamChecker* obj = new StreamChecker(words);
 * bool param_1 = obj->query(letter);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}