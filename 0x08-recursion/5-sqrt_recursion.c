int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;  // If n is negative, it doesn't have a natural square root
    if (n == 0 || n == 1)
        return n;   // Base case: square root of 0 or 1 is the number itself

    // Recursive case: Find the square root of n
    int start = 1;
    int end = n;
    int mid = (start + end) / 2;

    if (mid * mid == n)
        return mid;  // If the mid value squared is equal to n, it's the square root
    else if (mid * mid > n)
        return _sqrt_recursion(start, mid - 1);  // Square root is in the lower half
    else
        return _sqrt_recursion(mid + 1, end);    // Square root is in the upper half
}

