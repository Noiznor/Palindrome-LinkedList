#include <stdbool.h>

struct ListNode 
{
    int val;
    struct ListNode *next;
};

bool isPalindrome(struct ListNode* head);

struct ListNode* reverseLinkedList(struct ListNode* head);

bool isPalindrome(struct ListNode* head) 
{
    if (head == NULL || head->next == NULL) 
    {
        return true;
    }

    struct ListNode* slow = head;
    struct ListNode* fast = head;

    // Find the middle node of the linked list
    while (fast != NULL && fast->next != NULL) 
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse the second half of the linked list
    struct ListNode* reversedSecondHalf = reverseLinkedList(slow);

    // Compare the first half and reversed second half
    while (reversedSecondHalf != NULL)
    {
        if (head->val != reversedSecondHalf->val)
        {
            return false;
        }
        head = head->next;
        reversedSecondHalf = reversedSecondHalf->next;
    }

    return true;
}

struct ListNode* reverseLinkedList(struct ListNode* head) 
{
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;

    while (curr != NULL)
    {
        struct ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}
