#include<stdio.h>
#include <string.h>

struct Courier {
    int trackingID;
    char sender[50];
    char receiver[50];
    char address[100];
    char status[20];
};

int main() {
    struct Courier c[50];
    int count=0,n, choice, id, i, found;

    while (1) {
        printf("\n===== COURIER / DELIVERY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Courier\n");
        printf("2. Display All Couriers\n");
        printf("3. Search Courier by Tracking ID\n");
        printf("4. Update Delivery Status\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nEnter Tracking ID: ");
            scanf("%d", &c[count].trackingID);
            printf("Enter Sender Name: ");
            scanf(" %[^\n]", c[count].sender);
            printf("Enter Receiver Name: ");
            scanf(" %[^\n]", c[count].receiver);
            printf("Enter Delivery Address: ");
            scanf(" %[^\n]", c[count].address);
            strcpy(c[count].status, "In Transit"); // default
            count++;
            printf("Courier added successfully!\n");
            break;

        case 2:
            printf("\n----- ALL COURIER DETAILS -----\n");
            for (i = 0; i < n; i++) {
                printf("\nTracking ID: %d\n", c[i].trackingID);
                printf("Sender: %s\n", c[i].sender);
                printf("Receiver: %s\n", c[i].receiver);
                printf("Address: %s\n", c[i].address);
                printf("Status: %s\n", c[i].status);
            }
            break;

        case 3:
            printf("\nEnter Tracking ID to search: ");
            scanf("%d", &id);
            found = 0;

            for (i = 0; i < n; i++) {
                if (c[i].trackingID == id) {
                    printf("\n--- Courier Found ---\n");
                    printf("Sender: %s\n", c[i].sender);
                    printf("Receiver: %s\n", c[i].receiver);
                    printf("Address: %s\n", c[i].address);
                    printf("Status: %s\n", c[i].status);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Courier with ID %d not found.\n", id);
            break;

        case 4:
            printf("\nEnter Tracking ID to update status: ");
            scanf("%d", &id);
            found = 0;

            for (i = 0; i < n; i++) {
                if (c[i].trackingID == id) {
                    printf("Enter new status (In Transit / Delivered / Cancelled): ");
                    scanf(" %[^\n]", c[i].status);
                    printf("Status updated successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Courier with ID %d not found.\n", id);
            break;

        case 5:
            printf("Exiting system...\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}