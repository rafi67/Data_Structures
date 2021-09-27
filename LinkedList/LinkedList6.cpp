#include <bits/stdc++.h>

struct Node {
    int data;
    Node* next;
};

Node* head;

void push_back(int data) {
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if(head==NULL) {
        temp1->next = head;
        head = temp1;
        return;
    }
    else {
        Node* temp2 = head;
        while(temp2->next!=NULL) {
            temp2 = temp2->next;
        }
        temp1->next = temp2->next;
        temp2->next = temp1;
    }
}

void reverse(Node* p) {
    if(p->next==NULL) {
        head = p;
        return;
    }
    reverse(p->next);
    Node* q = p->next;
    q->next = p;
    p->next = NULL;
}

void Print(Node* p) {
    if(p==NULL) {
        printf("\n");
        return;
    }
    printf("%d ", p->data);
    Print(p->next);
}

int main() {

    for(int i=0; i<5; i++) {
        push_back(i);
    }
    reverse(head);
    Print(head);

    return 0;

}