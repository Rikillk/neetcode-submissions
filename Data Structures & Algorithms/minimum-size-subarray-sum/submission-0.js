class Solution {
    /**
     * @param {number} target
     * @param {number[]} nums
     * @return {number}
     */
    minSubArrayLen(target, nums) {
        let res = Infinity;
        let l = 0;
        let sum = 0
        for(let r = 0; r < nums.length; r++){
            sum += nums[r]
            while(sum >= target){
               sum -= nums[l] 
               res = Math.min(res, r - l + 1) 
               l +=1
            }
        } 
    return res == Infinity ? 0 : res
    }
}   
