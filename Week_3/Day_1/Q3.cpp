class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head == 0) return nullptr;
        ListNode* temp = head;
        int count = 0;
        while( temp != nullptr)  {
            count++;
            temp = temp->next;
        }
        int middposition = (count)/2;
        ListNode*  middNode = head;
        for(int i = 0; i < middposition; i++)    {
            middNode = middNode->next;
        }
        return middNode;        
        
    }
};
