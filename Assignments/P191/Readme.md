## Leet:191 -  Valid Palindrome
### Jarette Greene
### Description:

Given a positive integer n, write a function that returns the number of 
set bits in its binary representation (also known as the Hamming weight).

Approach: brute force appraoch by subtracting powers of 2 (starting from the power of 2 just under the n and ignoring all that larger than n) from the value n until it reaches 0 or less. anytime a power of 2 can be subtracted without going under 0 increment count by 1.  

### Files

|   #   | File                       | Description                                                |
| :---: | -------------------------- | ---------------------------------------------------------- |
|   1   | [main.txt](https://github.com/Jarette/4883-Prog-Tech/blob/main/Assignments/P191/main.txt)     | my solution function                                             |


### Instructions

- This project was compiled using C++

### Sources

Hamming weight:  

   https://en.wikipedia.org/wiki/Hamming_weight