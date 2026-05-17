class Solution {
    public int maxSubArray(ArrayList<Integer> arr) {
        int n=arr.size();
         int st,end,maxsum=Integer.MIN_VALUE;
        for(st=0;st<n;st++){
         int sum=0;
            for(end=st;end<n;end++){
                 sum=sum+arr[end];
                 maxsum=max(sum,maxsum);
            }
         }
        }
        return maxsum;
    }