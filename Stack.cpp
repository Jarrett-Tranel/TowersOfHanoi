#include "Stack.hpp"
#include <iostream>

Stack::Stack()
{
    this->top = 0;
}

void Stack::push (int payload)
{
    Node* n = new Node(payload);
    if(top)
    {
        //we have an element already
        n->setNextNode(this->top);
        this->top = n;
    }
    else
    {
        this->top = n;
    }
    
}

int Stack::pop()
{
    int valueToReturn = this->top->getPayload();
    Node* temp = this->top;
    top = top->getNextNode();
    temp->setNextNode(0);
    delete temp;
    return valueToReturn;
}

int Stack::peek()
{
    return this->top->getPayload();
}

void Stack::display()
{
    if(this->top)
    {
        Node* currNode = this->top;
        while(currNode)
        {
            std::cout <<currNode->getPayload() << "\n";
            currNode = currNode->getNextNode();
        }
        std::cout <<"______\n";
    }
    else
    {
        std::cout <<"______\n";
    }
    
}