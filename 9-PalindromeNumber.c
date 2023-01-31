/**
* 给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。

* 回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。

* 例如，121 是回文，而 123 不是。
**/


bool isPalindrome(int x){
    long num = 0;
    int w = 0;
    int xx = x;
    if(x < 0)
    {
        return false;
    }
    if(x == 0)
    {
        return true;
    }

    while(xx > 0)
    {
        w = xx % 10;
        num = num * 10 + w;
        xx = xx / 10;
    }

    if(num == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}
