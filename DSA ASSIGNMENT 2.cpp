                            //Name:Hira Muqaddas 
	              //Roll no:BSSE-M-24-24 
		// DSA Assignment 2
		// NOTE: Each task is written separately.
                     // Only one task should be compiled and run at a time.
                     
                     

                            //Task 1: Singly Linked List
             // Create a singly linked list that supports insertion at head and removal from head
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList() {
        head = NULL;
    }
// Insert at head
    void insertAtHead(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Remove from head
    void removeFromHead() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Display list
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    SinglyLinkedList list;
    list.insertAtHead(10);
    list.insertAtHead(20);
    list.insertAtHead(30);

    list.display();

    list.removeFromHead();
    list.display();

    return 0;
}

                           // Task 2: Stack Using Linked List
	//Create a stack class that uses linked list as private data member
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    void display() {
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main() {
    Stack s;
    s.push(5);
    s.push(10);
    s.push(15);

    s.display();

    s.pop();
    cout << "After pop:\n";
    s.display();

    return 0;
}

	              //Task 3: Infix to Postfix Conversion
	//Take infix expression as input and convert it to postfix
#include <iostream>
#include <stack>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

int main() {
    string infix, postfix = "";
    stack<char> st;

    cout << "Enter infix expression: ";
    cin >> infix;

    for (int i = 0; i < infix.length(); i++) {
        char ch = infix[i];

        // Operand
        if (isalnum(ch)) {
            postfix += ch;
        }
        // Opening bracket
        else if (ch == '(') {
            st.push(ch);
        }
        // Closing bracket
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }
        // Operator
        else {
            while (!st.empty() && precedence(st.top()) >= precedence(ch)) {
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    cout << "Postfix expression: " << postfix << endl;
    return 0;
}
                            //Task 4: Evaluate Postfix Expression
              //Evaluate postfix expression and display correct result
#include <iostream>
#include <stack>
using namespace std;

int main() {
    string postfix;
    stack<int> st;

    cout << "Enter postfix expression: ";
    cin >> postfix;

    for (int i = 0; i < postfix.length(); i++) {
        char ch = postfix[i];

        if (isdigit(ch)) {
            st.push(ch - '0');
        } else {
            int val2 = st.top(); st.pop();
            int val1 = st.top(); st.pop();

            if (ch == '+')
                st.push(val1 + val2);
            else if (ch == '-')
                st.push(val1 - val2);
            else if (ch == '*')
                st.push(val1 * val2);
            else if (ch == '/')
                st.push(val1 / val2);
        }
    }

    cout << "Result: " << st.top() << endl;
    return 0;
}
    //-----------------------------------------------------------------------------//
