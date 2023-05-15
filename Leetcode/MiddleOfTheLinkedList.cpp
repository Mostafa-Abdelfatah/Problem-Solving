//                  My Solution

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int size = 0;
        ListNode* temp = head;
        while (temp != nullptr)
        {
            size++;
            temp = temp->next;
        }
        ListNode* t = head;

        if (size % 2 == 0)
        {
            int a = size / 2;
            
            for (int i = 0; i < a;i++)
            {
                t = t->next;
            }
           
        }
        else
        {
            
            int a = (size - 1) / 2;
            for (int i = 0; i < a; i++)
            {
                t = t->next;
            }
        }
         return t;
    }
};

//                       not my solution but good idea


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;

        if(head==NULL || head->next==NULL)
        return head;

        while(fast!=NULL && fast->next!=NULL )
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;

    }
};