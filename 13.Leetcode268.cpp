/*************************************************************************
	> File Name: 13.Leetcode268.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 17时25分46秒
 ************************************************************************/
int missingNumber(int* nums, int numsSize){
    int ans = 0, n = numsSize + 1;
    for (int i = 0, j = 2; ; i += 1, j *= 2) {
        int cnt = n / j * (j >> 1);
        if (n % j > (j >> 1)) {
            cnt += n % j - (j >> 1);
        }
        if (cnt % 2) ans |= (1 << i);
        if (j >= n) break;
    }
    for (int i = 0; i < numsSize; i++) ans ^= nums[i];
    return ans;
}
