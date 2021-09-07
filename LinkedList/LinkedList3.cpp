#include <bits/stdc++.h>

struct Node {
    int data;
    Node* next;
};

Node* head;

void push_front(int data) {
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if(head!=NULL)
        temp->next = head;
    head = temp;
}

void Print() {
    printf("List is: ");
    while(head!=NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void Delete(int n) {
    Node* temp1 = head;
    if(n==1) {
        head = temp1->next;
        delete temp1;
        return;
    }
    for(int i=0; i<n-2; i++)
        temp1 = temp1->next;
    Node* temp2 = temp1->next;
    temp1->next = temp2->next;
    delete temp2;
}

int main() {

    head = NULL;
    for(int i=0; i<4; i++) {
        int temp;
        scanf("%d", &temp);
        push_front(temp);
    }
    Delete(3);
    Print();

    return 0;

}