class Solution {
public:
    int maxArea(vector<int>& height) {
        int i =0;
        int j = height.size() - 1;
        int max_Area = 0;     
        while( i < j){
           int width = j - i;
           int currHeight = min(height[i], height[j]);
           int currArea = width * currHeight;

           max_Area = max(currArea, max_Area);
           if(height[i] < height[j]){
            i++;
           }
           else{
            j--;
           }

        }
        return max_Area;
        
        
    }
};