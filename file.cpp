class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        stack<int>re;
        while(!q.empty()){
            re.push(q.front());
            q.pop();
        }
        queue<int>res;
        while(!re.empty()){
            res.push(re.top());
            re.pop();
        }
        return res;
    }
};
