/* Question 1: 

#include <vector>

int solution(std::vector<int> &A) { // & - address of operator
  
    int negativeCount = 0; // Initialize variable negativeCount to 0.  This variable counts the number of negative numbers in the array.

    for (int num : A) {
        if (num == 0) {
            return 0;
        } else if (num < 0) {
            negativeCount++;
        }
    }

    if (negativeCount % 2 == 0) { // Computes the remainder when negativeCount is divided by 2.
        return 1;
    } else {
        return -1;
    }
}*/


/* Question 2: A function that splits the string 'S' into a minimal number of substrings such that no letter occurs more than once in each substring.

#include <string>
#include <unordered_set>

int solution(std::string &S) {

    std::unordered_set<char> seenChars; // Initialize an unordered set seenChars{}
    int substrCount = 1; // We start with at least one substring

    for (char c : S) { // Iterate over each character in the string 'S'.

        // If the character has already been seen in the set seenChars

        if (seenChars.find(c) != seenChars.end()) {

            substrCount++;       // Increment the substring count 
            seenChars.clear();    
        }

        // Add the character to the set of seen characters
        seenChars.insert(c);
    }

    return substrCount;
}
*/



/* Question 3: Debug

#include <vector>
#include <algorithm>

int solution(vector<int>& A) {

    int ans = 0;
    for (uint i = 1; i < A.size(); i++) {
        if (ans > A[i]) {
            ans = A[i];
        }
    }
    return ans;
}
*/