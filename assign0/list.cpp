#include <iostream>

using namespace std;

struct ListNode {
    int value;
    ListNode *next;
    ListNode *prev;
};

void rewire(ListNode *head) {
    ListNode *second = new ListNode;
    head->next = second;
    second->prev = head;
}

void remodel(ListNode *head) {
    ListNode *second = head->next;
    rewire(second->next);
}

void deleteList(ListNode *head) {
    if (!head) return;
    deleteList(head->next);
    delete head;
}


int main() {
    int x = 5;
    int y = x-3;
    int z = x*y;
    cout << "Hello, World!" << endl;
    ListNode *first = new ListNode;
    first->next = nullptr;
    first->prev = nullptr;
    first->value = z;
    rewire(first);
    remodel(first);
    deleteList(first);

    return 0;
}