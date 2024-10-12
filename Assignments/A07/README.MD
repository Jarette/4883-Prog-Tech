## Leet:239 - Sliding Window Maximum
### Jarette Greene
### Description:

You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.

Return the max sliding window.

Approach: If the k is 1 simply return the original vector. If the window is the size of the of the vector simply return the largest element in vector. If none of those previous conditions are met use a double ended queue as a priority queue where you trverse the list by indexes and check if the value is largest then the value infront of it, if not then pop off that element and repeat this process until either the list is empty or the hits an element larger than the current insert. After hitting the size of the window insert the front value of the deque into another vectoring the largest value in the window. repeating this process for all windows.

### Files

|   #   | File                       | Description                                                |
| :---: | -------------------------- | ---------------------------------------------------------- |
|   1   | [main.txt](https://github.com/Jarette/4883-Prog-Tech/blob/main/Assignments/A07/main.txt)     | my solution function                                             |


### Instructions

- This project was compiled using C++

### Sources

Discussed solution in class without implementation.
