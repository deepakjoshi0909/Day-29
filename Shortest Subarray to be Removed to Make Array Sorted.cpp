class Solution { // frash
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int az = arr.size(), l = 0, r = az - 1;
        while (r > 0 && arr[r - 1] <= arr[r]) r--; 
        int ans = r; 
        while (l < r && (l == 0 || arr[l - 1] <= arr[l])) { 
            while (r < az && arr[r] < arr[l]) r++; 
            ans = min(ans, r - l - 1);
            l++;
        }
        return ans;
    }
};
