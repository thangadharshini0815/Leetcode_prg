bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;
    long long rev = 0;
    int temp = x;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return x == rev;
}
