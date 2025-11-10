#include <iostream>

int main(){
    //set variables
    double x,y=1;
    char operation;
    double answer;
    //styling
    std::cout<<"============The Console Calculator============\n";
    //directions
    std::cout<<"type in * or + or / or - depending on what operation you want to do\n";
    //input
    std::cin>>operation;
    std::cout<<"enter first number\n";
    std::cin>>x;
    std::cout<<"enter second number\n";
    std::cin>>y;
    switch (operation)
    {
    case '*':
        answer = x*y;
        std::cout<<answer<<"\n";
        break;
    case '+':
        answer=x+y;
        std::cout<<answer<<"\n";
        break;
    case '/':
        answer=x/y;
        std::cout<<answer<<"\n";
        if (y==0){
            std::cout<<"ERROR: CANNOT DIVIDE BY ZERO\n";
        }
        break;
    case '-':
       answer=x-y;
       std::cout<<answer<<"\n";
       break;
    }
    std::cout<<"==============================================";
}