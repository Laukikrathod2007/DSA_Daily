//Stock span problem
class Solution {
  public:
    vector<int> calculateSpan(vector<int>& price) {
        int n = price.size();
        vector<int> span(n, 1);
        stack<int> st;
    
        st.push(0);
    
        for (int i = 1; i < n; i++) {
            while (!st.empty() && price[st.top()] <= price[i]) {
                st.pop();
            }
    
            span[i] = st.empty() ? i + 1 : i - st.top();
    
            st.push(i);   
        }
    
        return span;
    }
};