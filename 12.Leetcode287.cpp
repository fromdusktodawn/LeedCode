/*************************************************************************
	> File Name: 12.Leetcode287.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 17时23分25秒
 ************************************************************************/
int findDuplicate(int* nums, int numsSize){
    int p = nums[0], q= nums[0];
    do {
        p = nums[p];
        q = nums[nums[q]];
    } while (p != q);
    q = nums[0];
    while (p != q) {
        p = nums[p];
        q = nums[q];
    }
    return p;
}
