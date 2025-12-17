class Solution {
public:

    ListNode* deleteDuplicates(ListNode* head) {



        if(!head) return nullptr;


        ListNode* curr= head;

        while(curr && curr->next)
        {
            if(curr->val == curr->next->val)
            {
                curr->next=curr->next->next;
            }
            else
            {
                curr=curr->next;
            }

        }

         return head;  

    
        // if (!head) return nullptr; 
        // ListNode* dummy = new ListNode(0);
        // ListNode* ans = dummy;
        
        // while (head) {
        //     if (!head->next || head->val != head->next->val) {
        //         ans->next = new ListNode(head->val);
        //         ans = ans->next;
        //     }
        //     head = head->next;
        // }

        // return dummy->next; 
    }
};
