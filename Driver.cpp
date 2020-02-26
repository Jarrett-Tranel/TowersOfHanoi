#include "Stack.hpp"
#include <iostream>



int main()
{
    Stack* towerOne = new Stack();
    Stack* towerTwo = new Stack();
    Stack* towerThree = new Stack();

    

    towerOne->push(111);
    towerOne->push(11);
    towerOne->push(1);
    towerOne->display();

    int move = towerOne->pop();
    towerTwo->push(move);
    std::cout << "Tower One: \n";
    towerOne->display();
    std::cout << "Tower Two: \n";
    towerTwo->display();
    std::cout << "Tower Three: \n";
    towerThree->display();
    std::cout << "\n";

    move = towerOne->pop();
    towerTwo->push(move);
    std::cout << "Tower One: \n";
    towerOne->display();
    std::cout << "Tower Two: \n";
    towerTwo->display();
    std::cout << "Tower Three: \n";
    towerThree->display();
    std::cout << "\n";
    
    move = towerOne->pop();
    towerThree->push(move);
    std::cout << "Tower One: \n";
    towerOne->display();
    std::cout << "Tower Two: \n";
    towerTwo->display();
    std::cout << "Tower Three: \n";
    towerThree->display();
    std::cout << "\n";

    move = towerTwo->pop();
    towerThree->push(move);
    std::cout << "Tower One: \n";
    towerOne->display();
    std::cout << "Tower Two: \n";
    towerTwo->display();
    std::cout << "Tower Three: \n";
    towerThree->display();
    std::cout << "\n";

    move = towerTwo->pop();
    towerThree->push(move);
    std::cout << "Tower One: \n";
    towerOne->display();
    std::cout << "Tower Two: \n";
    towerTwo->display();
    std::cout << "Tower Three: \n";
    towerThree->display();
    std::cout << "\n";

   

    return 0;
}
