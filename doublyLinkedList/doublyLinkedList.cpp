#include <bits/stdc++.h>

using namespace std;

struct node {
    node* pre;
    int data;
    node* next;
};

void insert(node** head, int data) {
    node* temp = new node[1];
    temp->pre = NULL;
    temp->data = data;
    temp->next = NULL;
    if(*head!=NULL) {
        node* temp2 = *head;
        while(temp2->next!=NULL) temp2 = temp2->next;
        temp->pre = temp2;
        temp2->next = temp; 
    }
    else *head = temp;
}

void print(node* head) {
    while(head!=NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

void rprint(node* head) {
    while(head->next!=NULL) head = head->next;

    while(head!=NULL) {
        printf("%d ", head->data);
        head = head->pre;
    }

}

int main() {

    node* head = NULL;

    int data;
    for(int i=0; i<4; i++) {
        scanf("%d", &data);
        insert(&head, data);
    }

    print(head);

    printf("\n");

    rprint(head);

    return 0;

}