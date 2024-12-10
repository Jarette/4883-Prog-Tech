## Leet 1042: Flower Planting No Adjacent
### Jarette Greene
### Description:

You have n gardens, labeled from 1 to n, and an array paths where paths[i] = [xi, yi] describes a bidirectional path between garden xi to garden yi. In each garden, you want to plant one of 4 types of flowers.

All gardens have at most 3 paths coming into or leaving it.

Your task is to choose a flower type for each garden such that, for any two gardens connected by a path, they have different types of flowers.

Return any such a choice as an array answer, where answer[i] is the type of flower planted in the (i+1)th garden. The flower types are denoted 1, 2, 3, or 4. It is guaranteed an answer exists.


Approach:

Dynamic Programming solution where using a vector of bools to represent all the colors available. So as you traverse the points/gardens assign a color based on the colors available from the vector of bools

### Files

|   #   | File                       | Description                                                |
| :---: | -------------------------- | ---------------------------------------------------------- |
|   1   | [main.txt](https://github.com/Jarette/4883-Prog-Tech/blob/main/Assignments/A11/main.txt)     | my solution function                                             |


### Instructions

- This project was compiled using C++

### Sources

- Discussed potential solutions in class and then implemente at home
