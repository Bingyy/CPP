class Solution {
public:
    int maxProduct(vector<string>& words) {
        int maxNum = 0;
        for(auto i = words.begin();i != words.end(); i++)
        {
            for(auto j = words.begin();j != words.end(); j++)
            {
                int count = compare(*i,*j);
                if(maxNum < count)
                {
                    maxNum = count;
                }
            }
        }
        return maxNum;
    }
    
    int compare(string line1,string line2)//测试，完美通过
    {
        int flag = 1;
        int count = 0;
        for(auto val:line1)
        {
            if(line2.find(val) != line2.npos)
            {
                flag = 0;
            }
        }
        if(flag)
        {
            count = line1.size() * line2.size();
        }
        return count;
    }
};