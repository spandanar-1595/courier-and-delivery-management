Abstract

This C program implements a simple Courier Management System that allows users to manage delivery records. It provides basic operations such as adding a new delivery, displaying all deliveries, and searching for a delivery using its ID. The system stores up to 100 delivery records using a structure and processes user commands through a menu-driven interface


Summary

The program defines a structure Delivery that stores details for each delivery, including:

deliveryId (auto-generated)

senderName

receiverName

destination

status (“Pending” by default)

The system supports three key features:

1. Add New Delivery

Prompts the user to input sender, receiver, and destination.

Assigns a unique auto-generated ID.

Sets status to “Pending”.

Stores the new delivery in the array.

2. Display All Deliveries

Prints a list of all deliveries with their full details.

If no deliveries exist, it informs the user.

3. Search Delivery by ID

User enters a delivery ID.

Program searches and displays the matching record if found.

If not found, it displays an appropriate message.

Program Flow

A loop shows a menu repeatedly until the user selects “Exit”.

Input is taken using scanf.

The maximum number of deliveries is capped at 100..

Instructions for Using the Program
1. Compile the Program

Use a C compiler such as GCC:

gcc courier.c -o courier

2. Run the Program
./courier

3. Follow the Menu Options

You will see:

--- Courier Management System ---
1. Add New Delivery
2. Display All Deliveries
3. Search Delivery by ID
4. Exit

4. Adding a Delivery

Choose option 1

Enter:

Sender Name

Receiver Name

Destination

The program assigns an ID and stores the delivery.

5. Displaying Deliveries

Choose 2 to print all stored deliveries.

6. Searching for a Delivery

Choose 3 and enter a delivery ID (e.g., 1, 2, 3…)

7. Exiting


<img width="380" height="112" alt="2" src="https://github.com/user-attachments/assets/5eb93f8a-c0a4-4581-a34b-c3d723e18cef" />
<img width="477" height="260" alt="1" src="https://github.com/user-attachments/assets/4b5a4252-3f97-4ce8-a381-6a1b211a688b" />
