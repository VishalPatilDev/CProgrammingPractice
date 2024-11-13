#include <stdio.h>
int main() {
    int price=600;
    char ch='Y';
    int discount;
    int priceAfterDiscount;
    if (ch == 'Y') {
        if (price > 500) {
            discount = 20;
        } else {
            discount = 10;
        }
    } else if (ch == 'N') {
        if (price > 600) {
            discount = 15;
        } else {
            discount = 0;
        }
    } else {
        printf("Invalid input for student status.\n");
        return 1;
    }
    priceAfterDiscount = price - (price * discount / 100);
    printf("Price after the discount is: %d\n", priceAfterDiscount);
    return 0;
}
