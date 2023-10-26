//Write a program to create a single linked list of n nodes and perform the following menu
//based operations on it using function:
//i. Insert a node at specific position 
//ii. Deletion of an element from specific position
//iii. Count nodes
//iv. Traverse the linked list
//i. search an element in the list
//ii. sort the list in ascending order
//iii. reverse the list

#include <iostream>

using namespace std;

struct Node {
    int info;
    Node* next;
};

Node* createNode(int info) {
    Node* newNode = new Node;
    newNode->info = info;
    newNode->next = nullptr;
    return newNode;
}

void insert(Node*& head, int info, int position) {
    Node* newNode = createNode(info);

    if (position == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* prev = nullptr;
        Node* ptr = head;
        int ptrPosition = 1;

        while (ptrPosition < position && ptr != nullptr) {
            prev = ptr;
            ptr = ptr->next;
            ptrPosition++;
        }

        if (ptrPosition == position) {
            prev->next = newNode;
            newNode->next = ptr;
        } else {
            cout << "Invalid position" << endl;
        }
    }
}

void deleteN(Node*& head, int position) {
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
    } else {
        Node* prev = nullptr;
        Node* ptr = head;
        int ptrPosition = 1;

        while (ptrPosition < position && ptr != nullptr) {
            prev = ptr;
            ptr = ptr->next;
            ptrPosition++;
        }

        if (ptrPosition == position) {
            prev->next = ptr->next;
            delete ptr;
        } else {
            cout << "Invalid position" << endl;
        }
    }
}

int CN(Node* head) {
    int count = 0;
    Node* ptr = head;
    while (ptr != nullptr) {
        count++;
        ptr = ptr->next;
    }
    return count;
}

void dis(Node* head) {
    Node* ptr = head;
    while (ptr != nullptr) {
        cout << ptr->info << "->";
        ptr = ptr->next;
    }
    cout<<"END";
    cout << endl;
}
int search(struct Node *head,int ser){
    int pos=1;
    Node* ptr = head;
    while (ptr != nullptr) {
        if (ptr->info==ser)
        {
            return pos;
        }        
        ptr = ptr->next;
        pos++;
    }

}
struct Node * sort(struct Node *head){

}
struct Node * reverse(struct Node *head){

}

int main() {
    Node* head = nullptr;

    while (true) {
        cout << "Menu:"<<endl;
        cout << "1. Insert "<<endl;
        cout << "2. Delete"<<endl;
        cout << "3. Count"<<endl;
        cout << "4. Traverse"<<endl;
        cout << "5. Search"<<endl;
        cout << "6. Exit"<<endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        if (choice == 6) {
            break;
        }

        switch (choice) {
            case 1:
                int info, position;
                cout << "Enter info: ";
                cin >> info;
                cout << "Enter position: ";
                cin >> position;
                insert(head, info, position);
                break;
            case 2:
                cout << "Enter position to delete: ";
                cin >> position;
                deleteN(head, position);
                break;
            case 3:
                cout << "Number of nodes: " << CN(head) << endl;
                break;
            case 4:
                cout << "Linked list: ";
                dis(head);
                break;
            case 5:
                int ser;
                cout<<"Enter element: "<<endl;
                cin>>ser;
                cout << "Position: "<<search(head,ser)<<endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    }

    return 0;
    }