#include <format>
#include <iostream>

using std::cout;
using std::format;

template <typename T>
class Node
{
private:
  Node *next; 
  T data;
public:
  Node(Node* node);
  Node(const T &d);
  ~Node();

  T& getData();
  Node* getNext();
  void setData(const T &d);
  void setNext(Node *p);
};

template <typename T>
Node<T>::Node(Node* node): data(node->data), next(node->next){}

template <typename T>
Node<T>::Node(const T &d) : data(d), next(nullptr) {}

template <typename T>
Node<T>::~Node(){}

template <typename T>
T& Node<T>::getData()
{
  return this->data;
}

template <typename T>
Node<T>* Node<T>::getNext()
{
  return this->next;
}

template <typename T>
void Node<T>::setData(const T &d)
{
  this->data = d;
}

template <typename T>
void Node<T>::setNext(Node *p)
{
  this->next = p;
}