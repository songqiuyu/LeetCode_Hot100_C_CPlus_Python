class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // 栈是先进后出，可以保证一直弹，入栈的一定是比当前要低的，一旦不低，就开始循环弹出求解
        stack<int> days;
        int n = temperatures.size();
        vector<int> result(n, 0);

        for(int i = 0; i < n ; i++){
            if(days.empty()){
                days.push(i);
            } else {
                int top_day = days.top();
                while(temperatures[top_day] < temperatures[i] && !days.empty()){
                    days.pop();
                    result[top_day] = i - top_day;
                }
                
                if(temperatures[top_day] >= temperatures[i]){
                    days.push(i);
                }
            }
        }
        return result;
    }
};