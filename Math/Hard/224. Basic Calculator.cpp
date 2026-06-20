class Solution {
public:
    int calculate(string s) {
        long long res = 0;      // current result
        long long num = 0;      // current number
        int sign = 1;           // current sign (+1 or -1)
        stack<long long> st;    // stack to store previous res and sign

        for (int i = 0; i < (int)s.size(); ++i) {
            char c = s[i];

            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            } 
            else if (c == '+') {
                res += sign * num;
                num = 0;
                sign = 1;
            } 
            else if (c == '-') {
                res += sign * num;
                num = 0;
                sign = -1;
            } 
            else if (c == '(') {
                // push current result and sign, start a new sub-expression
                st.push(res);
                st.push(sign);
                res = 0;
                sign = 1;
                num = 0;
            } 
            else if (c == ')') {
                // close current sub-expression
                res += sign * num;
                num = 0;
                int prevSign = st.top(); st.pop();
                long long prevRes = st.top(); st.pop();
                res = prevRes + prevSign * res;
            }
            // ignore spaces
        }

        // add the last number
        res += sign * num;
        return (int)res;
    }
};
