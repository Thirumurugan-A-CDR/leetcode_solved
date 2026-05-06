class Solution {
public:
    bool check(string s)
    {
        int start = 0;

        // Handle negative numbers
        if(s[0] == '-')
            start = 1;

        bool onlyDigits = true;

        for(int i = start; i < s.size(); i++) {
            if(s[i] < '0' || s[i] > '9') {
                onlyDigits = false;
                break;
            }
        }

        return onlyDigits;
    }

    int calPoints(vector<string>& operations) {
        stack<int> ele;

        for(int i = 0; i < operations.size(); i++)
        {
            if(check(operations[i]))
            {
                ele.push(stoi(operations[i]));
            }
            else if(operations[i] == "+")
            {
                int a = ele.top();
                ele.pop();

                int b = ele.top();
                ele.pop();

                ele.push(b);
                ele.push(a);

                int sum = a + b;
                ele.push(sum);
            }
            else if(operations[i] == "D")
            {
                int a = ele.top();
                int newans = a * 2;
                ele.push(newans);
            }
            else
            {
                ele.pop();
            }
        }

        int sum = 0;

        while(!ele.empty()) {
            sum += ele.top();
            ele.pop();
        }

        return sum;
    }
};