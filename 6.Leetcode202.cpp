/*************************************************************************
	> File Name: 6.Leetcode202.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 17时19分55秒
 ************************************************************************/
int get_next(int n) {
    int temp = 0; 
    while (n) {
        temp += (n % 10) * (n % 10);
        n /= 10;
    }
    return temp;
}

bool isHappy(int n){
    int p = n, q = n;
    while  (q != 1) {
        p = get_next(p);
        q = get_next(get_next(q));
        if (p == q) break;
    }
    return q == 1;
}
