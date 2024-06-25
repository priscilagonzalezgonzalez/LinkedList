#include "Node.cpp"

template <typename T>
class LinkedList
{
private:
  Node<T>* head;
public:
  LinkedList();
  ~LinkedList();
  void append(const T &d);
};

template <typename T>
LinkedList<T>::LinkedList()
{
  this->head = nullptr;
}

template <typename T>
LinkedList<T>::~LinkedList()
{
  Node<T>* current = head;
  while (current != NULL)
  {
    Node<T>* next = current->getNext();
    delete current;
    current = next;
  }
}

template <typename T>
void LinkedList<T>::append(const T &d)
{
  Node<T>* newNode = new Node(d); //Creates object in the heap (dynamic allocation)
  if (this->head == NULL){
    this->head = newNode;}
  else{
    Node<T>* current = head;
    while (current->getNext() != NULL)
    {
      current = current->getNext();
    }
    current->setNext(newNode);
  }
}