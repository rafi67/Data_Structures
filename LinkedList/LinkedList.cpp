#include <bits/stdc++.h>

struct Node {
    int data;
    Node* next;
};

void insert(Node** head, int x) {
    Node* temp = new Node[1];
    temp->data = x;
    temp->next = NULL;
    if(*head!=NULL) temp->next = *head;
    *head = temp;
}

void Print(Node* head) {
    printf("List is: ");
    while(head!=NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {

    Node* head = NULL;
    int n, x;
    printf("How many Numbers?\n");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        printf("Enter the number: ");
        scanf("%d", &x);
        insert(&head, x);
        Print(head);
    }

    delete head;

    return 0;

}