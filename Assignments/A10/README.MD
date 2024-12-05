## Leet:973 - K Closest Points
### Jarette Greene
### Description:

Given an array of points where points[i] = [xi, yi] represents a point on the X-Y plane and an integer k, return the k closest points to the origin (0, 0).

The distance between two points on the X-Y plane is the Euclidean distance (i.e., √(x1 - x2)2 + (y1 - y2)2).

You may return the answer in any order. The answer is guaranteed to be unique (except for the order that it is in).


Approach:

After creating a struct that stores both the index and the eucldiean distance of each. traverse the original list of points calculat the euclidean distance and keep track of index then insert into a new list and bubble sort the list to keep the list sorted based on euclidean distance. After sorting all points take the first k number of points from the list and store the original coridiantes in a new vector and return that vector for the result.

### Files

|   #   | File                       | Description                                                |
| :---: | -------------------------- | ---------------------------------------------------------- |
|   1   | [main.txt](https://github.com/Jarette/4883-Prog-Tech/blob/main/Assignments/A10/main.txt)     | my solution function                                             |


### Instructions

- This project was compiled using C++

### Sources

N/A
