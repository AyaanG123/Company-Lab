#include "Discounts.h"

void student(double &price) {
    price = price*0.9;
}

void senior(double &price) {
    price = price*0.8;
}

void rewardsMember(double &price) {
    price = price*0.7;
}
