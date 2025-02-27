#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class TextEditor {
public:
    vector<char>l,r;
    TextEditor() {
        
    }
    
    void addText(string text) {
        for (auto &item: text)
            l.push_back(item);
    }
    
    int deleteText(int k) {
        int n=min<int>(k, l.size());
        for (int i = 0; i < n; ++i) {
            l.pop_back();
        }
        return n;
    }
    
    string cursorLeft(int k) {
        int n=min<int>(k, l.size());
        for (int i = 0; i < n; ++i) {
            r.push_back(l.back());
            l.pop_back();
        }
        return string(l.begin()+ max<int>(l.size()-10,0),l.end());
    }
    
    string cursorRight(int k) {
        int n=min<int>(k, r.size());
        for (int i = 0; i < n; ++i) {
            l.push_back(r.back());
            r.pop_back();
        }
        return string(l.begin()+ max<int>(l.size()-10,0),l.end());
    }
};

/**
 * Your TextEditor object will be instantiated and called as such:
 * TextEditor* obj = new TextEditor();
 * obj->addText(text);
 * int param_2 = obj->deleteText(k);
 * string param_3 = obj->cursorLeft(k);
 * string param_4 = obj->cursorRight(k);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}