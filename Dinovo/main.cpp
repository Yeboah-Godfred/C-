#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

int main()
{
    srand(time(NULL));
    std::string name;
    int money,random_number,guess,age;
    std::cout << "What is your name? " << std::endl;
    getline(std::cin ,name);
    std::cout << "How old are you " << name << std::endl;
    std::cin >> age;
    
    if(age < 18){
        std::cout << "You are less than 18, you can't play this game." << std::endl;
        return 0;
    }else{
        std::cout << name << " welcome to Dinovo" << std::endl << "Enter money from 10gh to 50gh" << std::endl;
        std::cin >> money;
    }

    if(money > 50){
        std::cout << money << "gh is too huge to play this game" << std::endl;
    }else if(money < 10){
        std::cout << money << "gh is not enough to play this game" << std::endl;
    }else{
        do{
            std::cout << "Your balance is: " << money << "gh" << std::endl;
            std::cout << "Input a number from 1 to 5" << std::endl;
            std::cin >> guess;
            random_number = (rand() % 5)+1;
            std::cout << "Your guess is: " << guess << " and the computer number is: " << random_number << std::endl;

            if(guess == random_number){
                std::cout << "Correct! " << std::endl << name << " you have won 10 points" << std::endl;
                money += 20;
            }else{
                std::cout << "Wrong! " << std::endl << name << " you have lost 10 points" << std::endl;
                money -=10;
            };

            if(money >= 200){
                std::cout << "Well done! " << name << std::endl << "Our money is finished" << std::endl;
                return 0;
            }else if(money <= 9){
                std::cout << name << " wo sika no ahye" << std::endl;
                return 0;
            }else{
                continue;
            };

    }while(money>0);
    }

    return 0;
}
