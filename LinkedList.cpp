#include "Node.cpp"

class LinkedList
{
private:
  Node* head;
public:
  LinkedList();
  ~LinkedList();
  void append(const Student &s);
};

LinkedList::LinkedList()
{
  this->head = nullptr;
}

LinkedList::~LinkedList()
{
  Node* current = head;
  while (current != NULL)
  {
    Node* next = current->getNext();
    delete current;
    current = next;
  }
}

void LinkedList::append(const Student &s)
{
  Node* newNode = new Node(s); //Creates object in the heap (dynamic allocation)
  if (this->head == NULL){
    this->head = newNode;}
  else{
    Node* current = head;
    while (current->getNext() != NULL)
    {
      current = current->getNext();
    }
    current->setNext(newNode);
  }
}