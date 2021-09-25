#include <bits/stdc++.h>

struct Node {
    int data;
    Node* next;
};

void Print(Node* head) {
    if(head==NULL) {
        printf("\n");
        return;
    }
    printf("%d ", head->data);
    Print(head->next);
}

void reverse_print(Node* head) {
    if(head==NULL) 
        return;
    reverse_print(head->next);
    printf("%d ", head->data);
}

Node* push_back(Node* head, int data) {
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if(head==NULL) {
        temp1->next = head;
        head = temp1;
        return head;
    }
    else {
        Node* temp2 = head;
        while(temp2->next!=NULL)
            temp2 = temp2->next;
        temp1->next = temp2->next;
        temp2->next = temp1;
        return head;
    }
}

int main() {

    Node* head = NULL;
    for(int i=0; i<5; i++) {
        head = push_back(head, i);
    }

    Print(head);
    reverse_print(head);

    return 0;

}