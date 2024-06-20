#include <format>
#include <iostream>
#include "Student.cpp"

using std::cout;
using std::format;
class Node
{
private:
  Node *next; 
  Student student;
public:
  Node(Node* node);
  Node(const Student &s);
  ~Node();

  Student& getData();
  Node* getNext();
  void setData(const Student &s);
  void setNext(Node *p);
};

Node::Node(Node* node): student(node->student), next(node->next){}

Node::Node(const Student &s) : student(s), next(nullptr) {}

Node::~Node(){}

Student& Node::getData()
{
  return this->student;
}

Node* Node::getNext()
{
  return this->next;
}

void Node::setData(const Student &s)
{
  this->student = s;
}

void Node::setNext(Node *p)
{
  this->next = p;
}