## Leet 587: Erect the Fence / Presentation
### Jarette Greene
### Problem Description:

You are given an array trees where trees[i] = [xi, yi] represents the location of a tree in the garden.

Fence the entire garden using the minimum length of rope, as it is expensive. The garden is well-fenced only if all the trees are enclosed.

Return the coordinates of trees that are exactly located on the fence perimeter. You may return the answer in any order.

### Presentation Descrption: 

Presentation that shows my attempts to solve the problem Leet 587: Erect fence by using 2 convex hull algorithms (Graham Scan and Jarvis March). This presentation will explain how I went about implementing these algorithms and how they were adjusted specifically for this problem, including a brief walk through of a simple examples and the results I obtained from these implementation. 

### Note: 

I was not able to solve the problem but this presentation will discuss the shortcoming and potential improvements that can be made to obtain the same solution. 


Approach:

Intially implemented the Graham Scan algorithm after sorting points by the polar angle to the bottom most point push that point and the next point onto the stack. then for all the points in the graph push points on the stack and using the cross product to see the orientation between the previous, current and next point is clock wise only keeping Collinear and Counter clockwise turns. After not finding success with this algorithm attempted to implement the Jarvis March algorithm. This algorithm goes through each points starting at the left most point and calculating the cross product using the previous point, the point being considered as part of the hull, and potential next point and based on the orientation makes decision if to add the point or not. Both implmentation errored on the same test case but Graham scan provided the closest result to the solution.

Shortcomings and Potential solution:

Ran into issues where there was missing points from the hull. The reason can be due to:
- how these algorthms handle collinear points 
- the specific case of the hull handling perfect circles 

Due to the fact that both implmentation got stuck on the same test case this is evidence of a very specific edge case. So some ideas to fix this problem are:

- look deeper into the specific test case to solve specific edge case and research more on some limitations of Graham and Jarvis to see if using these are even possible due to this edge case
- try other convex hull algorithm.



### Files

|   #   | File                       | Description                                                |
| :---: | -------------------------- | ---------------------------------------------------------- |
|   1   | [main.txt](https://github.com/Jarette/4883-Prog-Tech/blob/main/Assignments/A10/main.txt)     | my solution function                                             |


### Instructions

- This project was compiled using C++

### Sources

Graham Scan:
   Wikipedia - https://en.wikipedia.org/wiki/Graham_scan 
   Geek for Geek - https://www.geeksforgeeks.org/convex-hull-using-graham-scan/
Jarvis March:
    Geek for Geek - https://www.geeksforgeeks.org/convex-hull-using-jarvis-algorithm-or-wrapping/
    Wikipedia - https://en.wikipedia.org/wiki/Gift_wrapping_algorithm
Both:
    Youtube - https://www.youtube.com/watch?v=B2AJoQSZf4M
    Chat GPT