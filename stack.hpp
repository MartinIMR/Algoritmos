class Node
{
 private:
 int data;
 Node *previous;
 public:
 int getData();
 Node * getPrevious();
 void setNode(int,Node *);
};

class Stack
{
 private:
 Node * upper;
 public:
 Stack();
 void push(int data);
 int pop();
 int top();
 bool isEmpty();
};

