#include <bits/stdc++.h>

struct Node {
    int data;
    Node* next;
};

Node* head;

void insert(int data, int n) {
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if(n==1) {
        temp1->next = head;
        head = temp1;
        return;
    }
    Node* temp2 = head;
    for(int i=0; i<n-2; i++) {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

void Print() {
    Node* temp = head;
    printf("List is: ");
    while(temp!=NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    
    for(int i=1; i<6; i++) {
        insert(i,i);
    }

    Print();

    return 0;

}