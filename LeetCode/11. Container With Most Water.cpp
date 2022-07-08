class Solution {
public:
    int maxArea(vector<int>& height) {
       int maximumArea = 0;
        // Left and right pointers
        int left = 0;
        int right = height.size() - 1;
        // Loop until left and right meet
        while (left < right) {
            // Shorter pole/vertical line
            int shorterLine = min(height[left], height[right]);
            // Update maximum area if required
            maximumArea = max(maximumArea, shorterLine * (right - left));
            // If there is a longer vertical line present
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maximumArea;
    }
    
};