#include <iostream> 
#include <cstdlib>

using namespace std;

struct Node {
    int val;
    struct Node *next;
};

typedef struct Node Node;

Node *create_list() {
    Node *head = (Node *)malloc(sizeof(Node));
    (*head).val = -1;
    (*head).next = NULL;
    return head;
    
}


void append(Node *head, int val) {
    Node *cur = head;
    while (cur -> next != NULL) {
        cur = cur -> next;
    }
    Node *tail = (Node *)malloc(sizeof(Node));
    tail -> val = val;
    tail -> next = NULL;
    cur -> next = tail;
}




/*int main() {
    Node *head = create_list();
    cout << (*head).val;

    return 0;
}*/

