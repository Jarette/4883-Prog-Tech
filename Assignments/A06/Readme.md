## Leet:451 - Sort Characters by Frequency
### Jarette Greene
### Description:

Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.
Return the sorted string. If there are multiple answers, return any of them.

Approach: Take every unique letters in the string in an unordered map where the keys are the charaters and the values are the frequncy of said character in the string. The 
map is then sorted based on value and each character is appended to a new string starting from the front with the number of said characters in the new string being the frequency from the map

### Files

|   #   | File                       | Description                                                |
| :---: | -------------------------- | ---------------------------------------------------------- |
|   1   | [main.txt](https://github.com/Jarette/4883-Prog-Tech/blob/main/Assignments/A06/main.txt)     | my solution function                                             |


### Instructions

- This project was compiled using C++

### Sources

Geek for Geeks: 

    https://www.geeksforgeeks.org/stringstream-c-applications/  #usings string stream to save runtime while saving resulting string 
    
    https://www.geeksforgeeks.org/sorting-a-map-by-value-in-c-stl/ # how to sort a dictionarry based on value 
