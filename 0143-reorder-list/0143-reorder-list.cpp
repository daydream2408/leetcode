class Solution {
public:
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return;

        ListNode* temp = head;

        // Find second-last node
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }

        // Last node
        ListNode* last = temp->next;

        // Remove last node
        temp->next = nullptr;

        // Insert last node after head
        last->next = head->next;
        head->next = last;

        // Reorder remaining middle portion
        reorderList(last->next);
    }
};