class Solution {
    public int numSubseq(int[] nums, int target) {
        Arrays.sort(nums);
        int[] pow = new int[nums.length];
        pow[0] = 1;
        int mod = (int) (1e9 + 7);
        for(int i = 1; i < nums.length; i++) {
            pow[i] = (pow[i - 1] * 2) % mod;
        }

        int l = 0;
        int r = nums.length - 1;
        int ans = 0;
        while(l <= r) {
            if(nums[l] + nums[r] > target) {
                r--;
            }
            else {
                ans = (ans + pow[r - l]) % mod;
                l++;
            }
        }

        return ans;
    }
}
/*
* we sort the array first
* if I have an array {1, 2, 3, 4, 5} target = 6
* {1, 2, 3, 4, 5}
*  ^            ^
*  |            |
*  l            r
* l = 0, r = 4, nums[l] + nums[r] = 6 which means any number before 6 is
* equal 6 or smaller than it which I take the numbers of subsequncws that 1 appeare in it
* is 2^4 why 4 because is the reast of the elemnts in the array {2, 3, 4, 5}
* after that l++ to chcek if (2 + 5 <= 6) I found it no then r--
* */