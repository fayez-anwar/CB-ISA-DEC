class Solution {
public:
    int length(ListNode* head){
        ListNode* temp = head;
        int n = 0;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        return n;
    }

    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> v;
        if(k == 1){
            v.push_back(head);
            return v;
        }

        int n = length(head);
        ListNode *temp = head;
        // if(k >= n){//each part has at most List one node in it
            
            // for(int i = 0; i < k; i++){
            //     v.push_back(temp);
            //     if(temp != NULL){
            //         ListNode* temp2 = temp->next;
            //         temp->next = NULL;
            //         temp = temp2;
            //     }
            // }
        //     // while(temp){
        //     //     v.push_back(temp);
        //     //     ListNode* temp2 = temp->next;
        //     //     temp->next = NULL;
        //     //     temp = temp2;
        //     // }
        //     // for(int i = 0; i < k - n; i++)
        //     //     v.push_back(NULL);
        //     return v;
        // }
    
        int m = n/k, rem = n%k;
        if(k > n) rem = 0;

        for(int i = 0; i < k; i++){
            v.push_back(temp);
            if(temp == NULL) {
                continue;
            }
            for(int j = 0; j < m - 1; j++){
                temp = temp->next;
            }
            if(rem){
                temp = temp->next;
                rem--;
            }
            ListNode* temp2 = temp->next;
            temp->next = NULL;
            temp = temp2;
        }
        return v;
    }
};