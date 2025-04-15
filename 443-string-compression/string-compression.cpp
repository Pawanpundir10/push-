class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0;
        int write=0;

        while(i<n)
        {
            char str=chars[i];
            int count=0;

            while(i<n && str==chars[i])
            {
                i++;
                count++;
            }

            chars[write++]=str;

            if(count>1)
            {
                string num=to_string(count);
                for(int c:num)
                {
                    chars[write++]=c;
                }
            }
        }

        return write;
    }
};