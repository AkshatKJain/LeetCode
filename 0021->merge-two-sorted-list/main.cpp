class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)
        {
            return list2;
        }
        if(list2 == NULL)
        {
            return list1;
        }

        if(list1->val <= list2->val)
        {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
        else
        {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head3 = NULL;
        ListNode* temp3 = NULL;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        while(temp1 != NULL && temp2 != NULL)
        {
            if(temp1->val <= temp2->val)
            {
                if(head3 == NULL)
                {
                    head3 = temp3 = temp1;
                }
                else
                {
                    temp3->next = temp1;
                    temp3 = temp3->next;
                }
                temp1 = temp1->next;
            }
            else
            {
                if(head3 == NULL)
                {
                    head3 = temp3 = temp2;
                }
                else
                {
                    temp3->next = temp2;
                    temp3 = temp3->next;
                }
                temp2 = temp2->next;
            }
        }

        while(temp1)
        {
            if(head3 == NULL)
                {
                    head3 = temp3 = temp1;
                }
                else
                {
                    temp3->next = temp1;
                    temp3 = temp3->next;
                }
            temp1 = temp1->next;
        }

        while(temp2)
        {
            if(head3 == NULL)
                {
                    head3 = temp3 = temp2;
                }
                else
                {
                    temp3->next = temp2;
                    temp3 = temp3->next;
                }
            temp2 = temp2->next;
        }
        return head3;
    }
};
