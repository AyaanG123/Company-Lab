//Ayaan Gill
//Company Lab
//5/20/25
//Extra: providing users with a link to a website
#include <iostream>
#include "Communications.h"//including the header files
#include "Discounts.h"

int main() {
    std::string name;
    std::cout<<"Hi, what is your name?: ";
    std::getline(std::cin, name);
    std::cout<<greeting(name);

    std::string street;
    std::cout<<"What street do you live on?: ";
    std::getline(std::cin, street);
    addy(street);
    std::cout<<street<<std::endl;

    std::string product;
    std::cout<<"What product you are interested in?: ";
    std::getline(std::cin, product);

    char coupon;
    std::cout<<"Would you like to enter a coupon code?(y or n): ";
    std::cin>>coupon;

    double price = 17.38;
    if(coupon == 'y') {
        char code;
        std::cout<<"What type of coupon do you have? (s for student, r for rewards member, or o for senior): ";
        std::cin>>code;

        switch(code) {
            case 's':
                student(price);
                break;
            case 'r':
                rewardsMember(price);
                break;
            case 'o':
                senior(price);
                break;
            default:
                std::cout<<"Invalid coupon code."<<std::endl;
                break;
        }
    }

    std::cout<<"Your final price is: "<<price<<std::endl;
    std::cout<<closing(product);
    std::cout<<"Visit us at 'www.com-quest.netlify.app' for more!";
    return 0;
} 
