class Solution {
   public static int trap(int[] height) {
        int[]  maxl = new int[height.length];
        int[]  maxr = new int[height.length];
        int l = 0;
        int r = 0;
        int ans = 0;
        maxl[0] = 0;
        maxr[height.length - 1] = 0;
        for(int i = 1; i < height.length; i++) {
            maxl[i] = Math.max(l, height[i - 1]);
            l = Math.max(Math.max(l, height[i - 1]), height[i]);
        }
        int a = 0;
        for(int i = height.length - 2; i>= 0; i--) {
            maxr[i] = Math.max(r, height[i + 1]);
            r = Math.max(Math.max(r, height[i + 1]), height[i]);
            a++;
        }
        for(int i = 0; i < height.length; i++) {
            if(Math.min(maxl[i], maxr[i]) - height[i] > 0) {
                ans = ans + Math.min(maxl[i], maxr[i]) - height[i];
            }
        }
        return ans;
    }
}
