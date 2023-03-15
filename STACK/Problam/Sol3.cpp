/*
Given a binary string S of size N and a number K, the task is to find if all the ‘0’s can be changed into ‘1′s in any number of operations. In one operation, if S[i] is initially ‘1’, then all ‘0‘s in the range [i+1, i+K] can be changed to ‘1’s, for 0≤i<N-K.

Input: S=”100100″, N=6, K=2
Output: YES
Explanation: S[0] can be used to change S[1] and S[2] into 1s
S[3] can be used to change S[4] and S[5] into 1s

Input: S=”110000″, N=6, K=2
Output: NO


Naive Approach: The simplest approach is to traverse the string in a reverse manner and if ‘0’ is encountered, check if the position of the nearest ‘1’ on the left is more than K indices away. If true, then print “NO”.

Time Complexity: O(N*K)
Auxiliary Space: O(1)

Efficient Approach: To optimize the above approach, the idea is to use a stack. Follow the steps below to solve the problem:

Initialize two variables flag and count as 1 and 0 respectively to store the result and to count the number of ‘0′s that have been changed by the last occurrence of ‘1′.
Initialize an empty stack st.
Traverse the string S, and do the following:
If stack is empty:
If the current element is ‘0’, change flag to 0 and break, as this ‘0′ cannot be changed to ‘1’.
Otherwise, update count to 0 and push 1 to st.
Otherwise:
If the current element is ‘0’, do the following:
Increment count by 1.
If count becomes equal to K, pop the stack st and update count to 0
Else, update count to 0.
If the value of flag is 1, print “YES”, otherwise print “NO” as the result.
*/
// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check whether all 0s
// in the string can be changed into 1s
void changeCharacters(string S, int N, int K)
{
    int flag = 1;

    // Store the count of 0s converted
    // for the last occurrence of 1
    int count = 0;

    // Declere a stack
    stack<char> st;

    // Traverse the string, S
    for (int i = 0; i < N; i++)
    {

        // If stack is empty
        if (st.empty())
        {

            // There is no 1 that can
            // change this 0 to 1
            if (S[i] == '0')
            {
                flag = 0;
                break;
            }

            // Push 1 into the stack
            count = 0;
            st.push(S[i]);
        }
        else
        {
            if (S[i] == '0')
            {
                count++;

                // The last 1 has reached
                // its limit
                if (count == K)
                {
                    st.pop();
                    count = 0;
                }
            }

            // New 1 has been found which
            // can now change at most K 0s
            else
            {
                count = 0;
            }
        }
    }

    // If flag is 1, print "YES"
    // else print "NO"
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

// Driver code
int main()
{
    // Given Input
    string S = "100100";
    int N = S.length();
    int K = 2;

    // Function call
    changeCharacters(S, N, K);

    return 0;
}
