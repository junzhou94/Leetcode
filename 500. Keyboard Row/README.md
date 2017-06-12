# 500. Keyboard Row
## Problem：
Given a List of words, return the words that can be typed using letters of alphabet on only one row's of American keyboard like the image below.

## Key：
1.use vector<char> alpha1 to store one line keyboard alphabet, and use find(alpha1.begin(),alpha1.end(),words[i][j])==alpha1.end()) to find if the alphabet is in the vector

