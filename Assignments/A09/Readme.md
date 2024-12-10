## Leet:587 - Erect the Fence 
### Jarette Greene
### Description:

You are given an array trees where trees[i] = [xi, yi] represents the location of a tree in the garden.

Fence the entire garden using the minimum length of rope, as it is expensive. The garden is well-fenced only if all the trees are enclosed.

Return the coordinates of trees that are exactly located on the fence perimeter. You may return the answer in any order.

Approach: Implement the monotone chain convex hull algorithm with additional checks for if there are less than three point or if the points make a straight line. There is additional handling for collinear points due to the fact this base implementation ignores collinear points but in this problem they need to be included. 

### Files

|   #   | File                       | Description                                                |
| :---: | -------------------------- | ---------------------------------------------------------- |
|   1   | [main.txt](https://github.com/Jarette/4883-Prog-Tech/blob/main/Assignments/A09/main.txt)     | my solution function                                             |


### Instructions

- This project was compiled using C++

### Sources

Monotone Chain Algorithm:

- https://www.geeksforgeeks.org/convex-hull-monotone-chain-algorithm/


