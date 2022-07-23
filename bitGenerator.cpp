#include <bits/stdc++.h>
using namespace std;

// diff --> difference between sums of first n bits
// and last n bits
// out --> output array
// start --> starting index
// end --> ending index
void findAllSequences(int diff, char* out, int start, int end)
{
    // We can't cover difference of more than n with 2n bits
    if (abs(diff) > (end - start + 1) / 2)
        return;
 
    // if all bits are filled
    if (start > end)
    {
        // if sum of first n bits and last n bits are same
        if (diff == 0)
            cout << out << " ";
        return;
    }
 
    // fill first bit as 0 and last bit as 1
    out[start] = '0', out[end] = '1';
    findAllSequences(diff + 1, out, start + 1, end - 1);
 
    // fill first and last bits as 1
    out[start] = out[end] = '1';
    findAllSequences(diff, out, start + 1, end - 1);
 
    // fill first and last bits as 0
    out[start] = out[end] = '0';
    findAllSequences(diff, out, start + 1, end - 1);
 
    // fill first bit as 1 and last bit as 0
    out[start] = '1', out[end] = '0';
    findAllSequences(diff - 1, out, start + 1, end - 1);
}
 
// Driver program
int main()
{
    // input number
    int n = 2;
 
    // allocate string containing 2*n characters
    char out[2 * n + 1];
 
    // null terminate output array
    out[2 * n] = '\0';
 
    findAllSequences(0, out, 0, 2*n - 1);
 
    return 0;
}