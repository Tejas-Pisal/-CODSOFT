#include<iostream>
class calculator 
{
    public:
        int add(int,int);
        int sub(int number1, int number2);
        int mul(int number1, int number2);
        int div(int number1, int number2);
};

int calculator :: add(int number1, int number2)
{
    return number1+number2;
}

int calculator::sub(int number1, int number2)
{
    return number1-number2;
}

int calculator::mul(int number1, int number2)
{
    return number1*number2;
}

int calculator::div(int number1, int number2)
{
    return number1/number2;
}

int main()
{
    int number1,number2,choice;
    calculator cal;
    while(1)
    {
        std::cout<<"1. Addition\n";
        std::cout<<"2. Substraction\n";
        std::cout<<"3. Multiplication\n";
        std::cout<<"4. Division\n";
        std::cout<<"5. Clear\n";
        std::cout<<"6. Exit\n\n";

        std::cout<<"Enter your choice : ";
        std::cin>>choice;
        if (choice==5)
        {
            system("cls");
            continue;
        }
        std::cout<<"Enter The First Number : ";
        std::cin>>number1;
        std::cout<<"Enter the Second number: ";
        std::cin>>number2;

        switch(choice)
        {
            case 1:std::cout<<"\nAddition of Two Numbers is : "<<cal.add(number1,number2)<<"\n\n";
                    break;
            case 2:std::cout<<"\nSubstraction of Two Numbers is : "<<cal.sub(number1,number2)<<"\n\n";
                    break;
            case 3:std::cout<<"\nMultiplication of Two Numbers is : "<<cal.mul(number1,number2)<<"\n\n";
                    break;
            case 4: if (number2 != 0) 
                    {
                        std::cout <<"\nDivision of Two Numbers is : " << cal.div(number1, number2) << "\n";
                    } 
                    else
                    {
                        std::cout <<"\nError: Division by zero is not allowed.\n\n";
                    }
                    break;
            case 6:exit(0);
            default:std::cout<<"\nPlease Enter the correct choice \n\n";
        }
    }
    return 0;
}