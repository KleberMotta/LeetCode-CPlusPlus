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
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *n = nullptr;
        ListNode *head = nullptr;
        ListNode *tmp = nullptr;
        int curr_sum = 0;

        while (l1 != nullptr || l2 != nullptr || curr_sum != 0)
        {

            n = new ListNode();

            if (l1 != nullptr)
                curr_sum += l1->val;
            if (l2 != nullptr)
                curr_sum += l2->val;

            n->val = (curr_sum >= 10) ? curr_sum - 10 : curr_sum;

            if (head == nullptr)
            {
                head = n;
                tmp = n;
            }
            else
            {
                tmp->next = n;
                tmp = n;
            }

            curr_sum = (curr_sum >= 10) ? 1 : 0;

            if (l1 != nullptr)
                l1 = l1->next;
            if (l2 != nullptr)
                l2 = l2->next;
        }

        return head;
    }
};