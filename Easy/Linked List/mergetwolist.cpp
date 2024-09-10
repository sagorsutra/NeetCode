#include <iostream>
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

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* t1 = list1;
    ListNode* t2 = list2;
    ListNode* dummy = new ListNode(-1);
    ListNode* temp = dummy;

    while (t1!=NULL && t2!=NULL)
    {
        if (t1->val < t2->val)
        {
            temp->next = t1;
            temp = t1;
            t1 = t1->next;
        }
        else{
            temp->next = t2;
            temp = t2;
            t2 = t2->next;
        }
    }
    if(t1){temp->next = t1;}
    else{
        temp->next = t2;
    }
    return dummy->next;
    
}

 

int main() {

    ListNode* list1 = nullptr;
    ListNode* list2 = nullptr;

    list1 = insertAtEnd(list1, 1);
    list1 = insertAtEnd(list1, 2);
    list1 = insertAtEnd(list1, 4);

    
    list2 = insertAtEnd(list2, 1);
    list2 = insertAtEnd(list2, 3);
    list2 = insertAtEnd(list2, 5);

    ListNode* result = mergeTwoLists(list1, list2);

    cout << "Result List: ";
    while (result != nullptr) {
        cout << result->val << " -> ";
        result = result->next;
    }
    cout << "nullptr" << endl;

    return 0;
}
