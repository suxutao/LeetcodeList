#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    char fa['z'+1];
    char find_set(char x){
        return fa[x]==x?x:fa[x]= find_set(fa[x]);
    }
    void merge_set(char a,char b){
        a= find_set(a);
        b= find_set(b);
        if (a!=b){
            if (a>b)
                swap(a,b);
            fa[b]=a;
        }
    }
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        for (int i = 'a'; i <= 'z'; ++i) {
            fa[i]=i;
        }
        for (int i = 0; i < s1.size(); ++i) {
            merge_set(s1[i],s2[i]);
        }
        for (auto &item: baseStr){
            item= find_set(item);
        }
        return baseStr;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}