class Solution {
public:

    unordered_map<char,int> symbols = 
    {{'[',-1},{'{',-2},{'(',-3},{')',3},{'}',2},{']',1}};

    bool isValid(string s) {
        stack<char> st;
    for(char br : s){
        if(symbols[br] < 0){
            st.push(br);
        }
        else{
            if(st.empty()){
                return false;
            }
            char sb = st.top();
            st.pop();
            if(symbols[br] + symbols[sb] != 0){
                return false;
            }
        }
    }
    if(st.empty()){
        return true;
    }
    return false;
    }
};