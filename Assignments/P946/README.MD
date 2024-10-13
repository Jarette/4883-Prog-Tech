## Leet:946 - Valid Stack Sequence 
### Jarette Greene
### Description:

Given two integer arrays pushed and popped each with distinct values, return true if this could have been the result of a sequence of push and pop operations on an initially empty stack, or false otherwise.

Approach: Brute Force solution where the resulting popped vector is attempted to be recreated by pushing the elements from the pushed vector to a temp vector then as values as are pushed to the temp vector the position is checked with the popped vector. If they match then continue if not then break loop. If the size of the temp is not equal to the size of popped then return false else true 

### Files

|   #   | File                       | Description                                                |
| :---: | -------------------------- | ---------------------------------------------------------- |
|   1   | [main.txt](https://github.com/Jarette/4883-Prog-Tech/blob/main/Assignments/P946/main.txt)     | my solution function                                             |


### Instructions

- This project was compiled using C++

### Sources

Discussed potential solutions in calss