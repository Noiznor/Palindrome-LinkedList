# Palindrome-LinkedList

<h1 align="left">Question</h1>

###

<h3 align="left">Given the head of a singly linked list, return true if it is a palindrome or false otherwise.</h3>

###

<div align="center">
  <img height="200" src="https://assets.leetcode.com/uploads/2021/03/03/pal1linked-list.jpg"  />
</div>

###

<h3 align="left">Input: head = [1,2,2,1]<br>Output: true</h3>

###

<div align="center">
  <img height="200" src="https://assets.leetcode.com/uploads/2021/03/03/pal2linked-list.jpg"  />
</div>

###

<h3 align="left">Input: head = [1,2]<br>Output: false</h3>

###

<h1 align="left">Approach:</h1>

###

<h3 align="left">- To determine if a linked list is a palindrome, we can follow these steps:<br>- Use the two-pointer approach to find the middle node of the linked list. We can have two pointers: a slow pointer that moves one step at a time and a fast pointer that moves two steps at a time. When the fast pointer reaches the end of the list, the slow pointer will be at the middle node.<br><br>- Reverse the second half of the linked list starting from the middle node. To reverse the list, we can use a standard technique of iterating through the list and changing the direction of the pointers.<br><br>- Compare the values of the first half of the original list (up to the middle node) with the reversed second half of the list. If any values don't match, the list is not a palindrome.<br><br>- If all values match, the list is a palindrome.</h3>

###

<h1 align="left">Complexity:</h1>

###

<h3 align="left">Time Complexity: <br>The time complexity of this approach is O(n), where n is the number of nodes in the linked list. We need to traverse the entire list to find the middle node, reverse the second half, and compare the values.<br><br>Space Complexity: <br>The space complexity is O(1) as we only use a constant amount of additional space. We don't require any additional data structures that grow with the input size.</h3>

###
