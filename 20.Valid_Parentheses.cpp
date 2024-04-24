// Time complexity is O(n) and Space complexity is O(n).

class Solution {
public:
    bool isValid(std::string s) {
        stack<char> stack; // Create a stack to store opening symbols
        for (char c : s) {
            if (c == '(')
                stack.push(')');
            else if (c == '{')
                stack.push('}');
            else if (c == '[')
                stack.push(']');
            else if (stack.empty() || stack.top() != c)
                return false;
            else
                stack.pop();// If it's a closing symbol and matches the top of the stack, pop the top element from the stack
        }
        return stack.empty();// If the stack is empty at the end, all symbols were matched, and the string is valid
    }
};
