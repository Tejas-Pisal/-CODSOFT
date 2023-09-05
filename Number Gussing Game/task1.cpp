#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int no = rand() % 100 + 1;
    int guess;
    std::cout <<"Guess a number between 1 to 100: ";
    std::cin >> guess;
    if (guess == no)
    {
        std::cout <<"Congratulations! You guessed the correct number.";
    } 
    while (no!=guess)
    {
        if(guess>no)
        {
            std::cout <<"your guess is to high \n";
            std::cout<<"Try again :- ";
            std::cin>>guess;
        }
        else if(guess<no)
        {
            std::cout<<"your guess is to low \n";
            std::cout<<"Try again :- ";
            std::cin>>guess;
        }
        if (guess == no)
        {
            std::cout <<"\nCongratulations! You guessed the correct number.";
        } 
    }
    return 0;
}
