#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<char,char>v;
    int find_set(char x){
        return x==v[x]?x:v[x]= find_set(v[x]);
    }
    void merge_set(char x,char y){
        x= find_set(x);
        y= find_set(y);
        if (x!=y){
            v[x]=v[y];
        }
    }
    bool equationsPossible(vector<string>& equations) {
        for (int i = 'a'; i <= 'z'; ++i) {
            v[i]=i;
        }
        for (const auto &item: equations){
            if (item[1]=='=')
                merge_set(item[0],item[3]);
        }
        for (const auto &item: equations){
            if (item[1]=='!'){
                int a= find_set(item[0]),b= find_set(item[3]);
                if (a==b)
                    return false;
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}