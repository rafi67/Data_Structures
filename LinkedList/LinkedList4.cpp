#include <bits/stdc++.h>

struct Node {
    int data;
    Node* next;
};

Node* push_back(Node* h, int data) {
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if(h==NULL) {
        temp1->next = h;
        h = temp1;
        return h;
    }
    else {
        Node* temp2 = h;
        while(temp2->next!=NULL)
            temp2 = temp2->next;
        temp1->next = temp2->next;
        temp2->next = temp1;
        return h;
    }
}

void Print(Node* h) {
    Node* temp = h;
    printf("List is: ");
    while(temp!=NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

Node* reverse(Node* h) {
    Node *prev, *Next, *current;
    current = h;
    prev =  NULL;
    while(current!=NULL) {
        Next = current->next;
        current->next = prev;
        prev = current;
        current = Next;
    }
    h = prev;
    return h;
}

int main() {

    Node* head = NULL;
    
    head = push_back(head, 2);
    head = push_back(head, 4);
    head = push_back(head, 6);
    head = push_back(head, 8);

    printf("before reversing the linked list:\n");

    Print(head);

    printf("After reversing the linked list:\n");

    head = reverse(head);

    Print(head);

    return 0;

}