struct Node {
    int val;
    Node* next;
    Node* prev;

    Node(int x): val(x), next(nullptr), prev(nullptr)
    {}
};

class MyLinkedList {
private:
    int size;
    Node* head;
    Node* tail;
    
public:
    MyLinkedList() 
    {
        head = new Node(0);
        tail = new Node(0);
        head->next = tail;
        tail->prev = head;
        size = 0;
    }
    
    int get(int index) 
    {
        if (index < 0 || index >= size)
        {
            return -1;
        }
        Node* curr = head;
        for (int i = 0; i < index; i++)
        {
            curr = curr->next;
        }
        return curr->next->val;
    }
    
    void addAtHead(int val) 
    {
        Node* toAdd = new Node(val);
        toAdd->next = head->next;
        head->next->prev = toAdd;
        toAdd->prev = head;
        head->next = toAdd;
        size++;
    }
    
    void addAtTail(int val)
    {
        Node* toAdd = new Node(val);
        toAdd->prev = tail->prev;
        tail->prev->next = toAdd;
        toAdd->next = tail;
        tail->prev = toAdd;
        size++;
    }
    
    void addAtIndex(int index, int val) 
    {
        if (index < 0 || index > size)
        {
            return;
        }
        Node* curr = head;
        for (int i = 0; i < index; i++)
        {
            curr = curr->next;
        }
        Node* toAdd = new Node(val);
        toAdd->next = curr->next;
        curr->next->prev = toAdd;
        toAdd->prev = curr;
        curr->next = toAdd;
        size++;
    }
    
    void deleteAtIndex(int index) 
    {
        if (index < 0 || index >= size)
        {
            return;
        }
        Node* curr = head;
        for (int i = 0; i < index; i++)
        {
            curr = curr->next;
        }
        Node* toDelete = curr->next;
        curr->next = curr->next->next;
        curr->next->prev = curr;
        
        toDelete->prev = nullptr;
        toDelete->next = nullptr;
        delete toDelete;
        size--;
        
    }
};