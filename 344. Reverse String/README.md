# 557. Reverse Words in a String III
## Problem：
Given a string, you need to reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

Example 1:
Input: "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"

## Key：
1.use two pointers i&j, i points to the begin of the word while j points to the end of the word+1(the space)  reverse them    
O(n²) but without extra space

