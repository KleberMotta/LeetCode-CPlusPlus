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
        ListNode *head = nullptr;
        ListNode **tmp = &head;
        int curr_sum = 0;

        while (l1 != nullptr || l2 != nullptr || curr_sum != 0)
        {

            if (l1 != nullptr)
            {
                curr_sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr)
            {
                curr_sum += l2->val;
                l2 = l2->next;
            }

            (*tmp) = new ListNode(curr_sum % 10);
            curr_sum /= 10;
            tmp = &((*tmp)->next);
        }

        return head;
    }
};