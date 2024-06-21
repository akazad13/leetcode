class Solution {
public:
    bool isValid(string s) {
       stack<char> container;

       for(char ch:s) {
            if(!container.size()) {
                container.push(ch);
                continue;
            }
            if(ch == ')'){
                if(container.top() == '(') {
                    container.pop();
                    continue;
                }
            } else if(ch == '}') {
                if(container.top() == '{') {
                    container.pop();
                    continue;
                }
            } else if(ch == ']'){
                if(container.top() == '[') {
                    container.pop();
                    continue;
                }
            }
            
            container.push(ch);
        }
        return container.empty();
    }
};