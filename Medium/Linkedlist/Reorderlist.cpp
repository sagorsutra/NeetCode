#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* insertAtEnd(ListNode* head, int value) {
    ListNode* newNode = new ListNode(value);
    if (!head) return newNode;
    
    ListNode* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

ListNode* reverseList(ListNode* head) {
    ListNode* temp = nullptr;
    ListNode* temp2 = nullptr;

    while (head != nullptr) {
        temp2 = head->next;
        head->next = temp;
        temp = head;
        head = temp2;
    }
    return temp;
}

class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* second = reverseList(slow->next);
        slow->next = nullptr;
        ListNode* first = head;
        
        while (second) {
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;
            first->next = second;
            second->next = temp1;
            first = temp1;
            second = temp2;
        }
    }
};

int main() {
    ListNode* list1 = nullptr;
    list1 = insertAtEnd(list1, 1);
    list1 = insertAtEnd(list1, 2);
    list1 = insertAtEnd(list1, 3);
    list1 = insertAtEnd(list1, 4);
    list1 = insertAtEnd(list1, 5);

    Solution sol;
    sol.reorderList(list1);

    cout << "Result List: ";
    ListNode* temp = list1;  // Use a temporary pointer to traverse the list
    while (temp) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;

    return 0;
}




// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

//  struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

// ListNode* insertAtEnd(ListNode* head, int value) {
//     ListNode* newNode = new ListNode(value);
//     if (!head) return newNode;
    
//     ListNode* temp = head;
//     while (temp->next) {
//         temp = temp->next;
//     }
//     temp->next = newNode;
//     return head;
// }

// ListNode* reverseList(ListNode* head) {
//         ListNode* temp =  nullptr;
//         ListNode* temp2 = nullptr;

//         while (head!=nullptr) {
//             temp2 = head->next;
//             head->next = temp;
//             temp = head;
//             head = temp2;
//         }
//          return temp;
//     }

// class Solution {
// public:
//     void reorderList(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast = head->next->next;

//         while (fast && fast->next)
//         {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
        
//         ListNode* second = reverseList(slow->next);
//         slow->next = NULL;
//         ListNode* first = head;
        
//         while (second)
//         {
//             ListNode* temp1 = first->next;
//             ListNode* temp2 = second->next;
//             first->next= second;
//             second->next = temp1;
//             first = temp1;
//             second = temp2;
//         }
        
//     }
// };


// int main() {

//     ListNode* list1 = nullptr;
//     list1 = insertAtEnd(list1, 1);
//     list1 = insertAtEnd(list1, 2);
//     list1 = insertAtEnd(list1, 3);
//     list1 = insertAtEnd(list1, 4);
//     list1 = insertAtEnd(list1, 5);





//     Solution sol;

//     sol.reorderList(list1);
// ListNode* temp = list1;
//     cout << "Result List: ";
//     while (temp) {
//         cout << list1->val << " -> ";
//         list1 = list1->next;
//     }
//     cout << "nullptr" << endl;

//     return 0;
// }