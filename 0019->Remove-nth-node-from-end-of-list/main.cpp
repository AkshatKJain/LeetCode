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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;

        while(temp)
        {
            temp = temp->next;
            count++;
        }
        temp = head;
        ListNode* prev = NULL;
        
        int nodetobedeleted = (count - n +1);

        if(nodetobedeleted == 1)
        {
            return head->next;
        }
        else if(nodetobedeleted == count)
        {
            while(temp->next != NULL)
            {
                prev = temp;
                temp = temp->next;
            }
            prev->next = NULL;
            return head;
        }
        else
        {
            int counter = 1;
            while(counter < nodetobedeleted)
            {
                counter++;
                prev = temp;
                temp = temp->next;
            }
            prev->next = temp->next;
            return head;
        }
    }
};
