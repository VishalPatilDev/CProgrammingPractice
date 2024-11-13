#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100

typedef struct {
    char name[50];
    float price;
    int quantity;
} Item;

void addItem(Item items[], int *itemCount) {
    if (*itemCount < MAX_ITEMS) {
        printf("Enter item name: ");
        getchar(); // Clear newline
        fgets(items[*itemCount].name, sizeof(items[*itemCount].name), stdin);
        items[*itemCount].name[strcspn(items[*itemCount].name, "\n")] = 0; // Remove newline

        printf("Enter item price: ");
        scanf("%f", &items[*itemCount].price);
        
        printf("Enter item quantity: ");
        scanf("%d", &items[*itemCount].quantity);
        
        (*itemCount)++;
        printf("Item added successfully!\n");
    } else {
        printf("Inventory is full!\n");
    }
}

void displayItems(const Item items[], int itemCount) {
    printf("\nAvailable Items:\n");
    for (int i = 0; i < itemCount; i++) {
        printf("%d. %s - Price: $%.2f, Quantity: %d\n", i + 1, items[i].name,items[i].price, items[i].quantity);
    }
}

void addToCart(Item cart[], int *cartCount, Item items[], int itemCount) {
    int choice, quantity;
    displayItems(items, itemCount);
    printf("Enter item number to add to cart (0 to finish): ");
    scanf("%d", &choice);
    while (choice != 0) {
        if (choice > 0 && choice <= itemCount) {
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            if (quantity <= items[choice - 1].quantity) {
                cart[*cartCount] = items[choice - 1];
                cart[*cartCount].quantity = quantity;
                (*cartCount)++;
                items[choice - 1].quantity -= quantity; // Reduce inventory
                printf("Added %d x %s to cart.\n", quantity, items[choice - 1].name);
            } else {
                printf("Insufficient quantity available.\n");
            }
        } else {
            printf("Invalid choice, try again.\n");
        }
        printf("Enter item number to add to cart (0 to finish): ");
        scanf("%d", &choice);
    }
}

float calculateTotal(const Item cart[], int cartCount) {
    float total = 0.0;
    for (int i = 0; i < cartCount; i++) {
        total += cart[i].price * cart[i].quantity;
    }
    return total;
}

int main() {
    Item items[MAX_ITEMS]; // Array of items for inventory
    Item cart[MAX_ITEMS];  // Array of items for cart
    int itemCount = 0;     // Count of items in inventory
    int cartCount = 0;     // Count of items in cart
    int choice;

    while (1) {
        printf("\nPoint of Sale System Menu:\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Add to Cart\n");
        printf("4. Checkout\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addItem(items, &itemCount);
                break;
            case 2:
                displayItems(items, itemCount);
                break;
            case 3:
                addToCart(cart, &cartCount, items, itemCount);
                break;
            case 4:
                {
                    float total = calculateTotal(cart, cartCount);
                    printf("Total cost: $%.2f\n", total);
                    cartCount = 0; // Clear cart after checkout
                    break;
                }
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
