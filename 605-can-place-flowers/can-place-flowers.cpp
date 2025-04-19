class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int f=flowerbed.size();
    int i=0;
    while(i<f)
    {
        if (flowerbed[i] == 1) {
                i += 2;
        }
        else{
            if(i==f-1 || flowerbed[i+1]==0)
            {
                flowerbed[i]=1;
                n--;
                i=i+2;
            }
            else
            {
                i++;
            }
        }
        }
       return n <= 0;
    
    }
};