#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    node* next;
};

void Insert(node** head, int data) {
    node* temp = new node[1];
    temp->data = data;
    temp->next = NULL;
    if(*head!=NULL) {
        node* temp2 = *head;
        while(temp2->next!=NULL) temp2 = temp2->next;
        temp2->next = temp;
    }
    else *head = temp;
}

void print(node** head) {
    node* temp = *head;
    while(temp!=NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void Delete(node** head, int key) {
    node* temp = *head;
    while(temp->next!=NULL) {
        if(temp->next->data==key) {
            node* temp2 = temp->next;
            temp->next = temp->next->next;
            temp2->next = NULL;
            delete temp2;
            break;
        } 
        temp = temp->next;
    }
}

int main() {

    int item;
    node* head = NULL;

    for(int i=0; i<5; ++i) {
        scanf("%d", &item);
        Insert(&head, item);
    }

    print(&head);

    scanf("%d", &item);

    Delete(&head, item);

    printf("Afeter Deletion\n");

    print(&head);

    return 0;

}