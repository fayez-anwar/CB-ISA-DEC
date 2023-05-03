class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        for(int i = 0; i < n; i++){
            temp = temp->next;
        }
        ListNode* prev = head;
        if(temp == NULL){
            ListNode *temp2 = head->next;
            delete head;
            return temp2;
        }
        while(temp->next != NULL){
            temp = temp->next;
            prev = prev->next;
        }
        ListNode *temp2 = prev->next;
        prev->next = temp2->next;//prev->next->next
        delete temp2;
        return head;
    }
};