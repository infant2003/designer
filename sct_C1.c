#include <bits/stdc++.h>
using namespace std;

//defining Linked List Node class which has three fields - data, next and random
class Node
{
public:
    int data; //Node data

    // Next and random pointers
    Node *next, *random;

    Node(int data) //constructor
    {
        this->data = data;
        this->next = this->random = NULL;
    }
};

// defining linked list class
class LinkedList
{
public:
    Node *head; // Linked list head reference

    LinkedList(Node *head) //constructor
    {
        this->head = head;
    }

    void push(int data) //function to insert data at the head of linked list
    {
        Node *node = new Node(data);
        node->next = head;
        head = node;
    }

    // Function to print the linked list
    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            Node *random = temp->random;
            int randomData = (random != NULL) ? random->data : -1;
            cout << "Node Value = " << temp->data
                << ", ";
            cout << "Node Value of the Random pointer = " << randomData << endl;
            temp = temp->next;
        }
        cout << endl;
    }

    LinkedList *clone() //function to return the clone of linked list
    {
        Node *origCurr = head;
        Node *cloneCurr = NULL;

        // Hash map which contains node
        // to node mapping of original
        // and clone linked list.
        unordered_map<Node *, Node *> mymap;

        // Traverse the original list and
        // make a copy of that in the
        // clone linked list.
        while (origCurr != NULL) //loop terminating condition
        {
            cloneCurr = new Node(origCurr->data);
            mymap[origCurr] = cloneCurr;
            origCurr = origCurr->next; //update origCurr to point to the  next node
        }

        //update origCurr to point to the head of original list for second traversal
        origCurr = head;

        // Traversal of original list again
        // to adjust the next and random
        // references of clone list using
        // hash map
        while (origCurr != NULL)
        {
            cloneCurr = mymap[origCurr];
            cloneCurr->next = mymap[origCurr->next];
            cloneCurr->random = mymap[origCurr->random];
            origCurr = origCurr->next;
        }

        // return the head of the clone of linked list which is mymap[head]
        return new LinkedList(mymap[head]);
    }
};

// main code to test the above implementation
int main()
{
    Node *head = new Node(10); // create new head node having value 5
    // creating a new linked list with the head node as head
    LinkedList *mylist = new LinkedList(head);

    //adding more nodes in the linked list using push() function of LinkedList class
    mylist->push(1);
    mylist->push(4);
    mylist->push(5);
    mylist->push(1);

    // intialising the values of random pointers of each node of the mylist

    //random field of first node i.e. head
    mylist->head->random = mylist->head->next->next;

    //random field of second node i.e. head->next
    mylist->head->next->random = mylist->head;

    //random field of third node i.e. head->next->next
    mylist->head->next->next->random =
        mylist->head->next->next->next->next;

    //random field of fourth node i.e. head->next->next->next
    mylist->head->next->next->next->random =
        mylist->head->next->next->next->next;

    //random field of fifth node i.e. head->next->next->next->next
    mylist->head->next->next->next->next->random =
        mylist->head->next;

    LinkedList *clone = mylist->clone(); //creating clone of linked list

    cout << "The Original linked list is as follows:\n";
    mylist->print();
    cout << "\nClone of linked list is as follows:\n";
    clone->print();
}