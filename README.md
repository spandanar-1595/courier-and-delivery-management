Here is an **attractive, clean, and GitHub-ready “Process / Workflow” section** for your Courier Management System README file.
You can copy-paste it directly into your README.

---

# 🚚 **Process Flow of Courier / Delivery Management System**

📄 Abstract

The Courier / Delivery Management System is a simple console-based C program designed to efficiently manage courier records. It allows users to add new couriers, display all existing couriers, search for specific couriers by tracking ID, and update the delivery status of shipments. The system maintains essential details such as sender and receiver information, delivery address, and current status, ensuring easy tracking and management of parcels. With a user-friendly menu-driven interface, this project helps streamline courier operations and provides a practical example of basic data handling using structures in C.

---

## 🔹 **1. Start the Program**

The system begins with an infinite loop that continuously displays the **main menu** until the user chooses to exit.

---

## 🔹 **2. Add Courier**

When the user selects **Option 1**, the following steps occur:

1. User enters **Tracking ID**
2. User enters **Sender Name**
3. User enters **Receiver Name**
4. User enters **Delivery Address**
5. System automatically sets:
   ✔ Status = `"In Transit"`
6. Courier details are stored in the next available index in the structure array
7. Displays: **"Courier added successfully!"**

---

## 🔹 **3. Display All Couriers**

On selecting **Option 2**, the system:

1. Loops through the courier list
2. Displays all details:

   * Tracking ID
   * Sender
   * Receiver
   * Address
   * Status
3. Useful for viewing all stored courier records at once

---

## 🔹 **4. Search Courier by Tracking ID**

When **Option 3** is chosen:

1. User enters a **Tracking ID**
2. System scans all saved couriers
3. If a match is found:
   ✔ Shows complete details of the courier
4. If not found:
   ✘ Displays: `"Courier with ID ___ not found."`

---

## 🔹 **5. Update Delivery Status**

On selecting **Option 4**:

1. User enters the **Tracking ID to update**
2. System locates the courier
3. User enters the new status (Examples:

   * *In Transit*
   * *Delivered*
   * *Cancelled*)
4. System updates status and displays: **"Status updated successfully!"**

---

## 🔹 **6. Exit the Program**

Choosing **Option 5**:

✔ Displays `"Exiting system..."`
✔ Program safely terminates

---

# ⭐ **Overall Workflow Diagram**

```
START
   ↓
Display Menu
   ↓
User Choice
   ├── 1 → Add Courier → Store Data → Back to Menu
   ├── 2 → Display All Couriers → Back to Menu
   ├── 3 → Search by ID → Show Result → Back to Menu
   ├── 4 → Update Status → Save Change → Back to Menu
   └── 5 → Exit Program
```

---

📸 Screenshots

1️⃣ Program Home Menu

<img width="513" height="235" alt="Screenshot 2025-11-26 164451" src="https://github.com/user-attachments/assets/8e4c2e47-2c72-46b5-a71f-89c14f8b6def" />


2️⃣ Adding a New Courier

<img width="380" height="112" alt="2" src="https://github.com/user-attachments/assets/c40fc7c5-c9e1-4e4d-8567-50e63697873a" />


3️⃣ Courier Added Successfully Message

<img width="333" height="137" alt="Screenshot 2025-11-24 220127" src="https://github.com/user-attachments/assets/9f32ed17-9a15-42d2-9d5e-2bab84cb9ac3" />


4️⃣ Displaying All Courier Records

<img width="315" height="117" alt="Screenshot 2025-11-24 220428" src="https://github.com/user-attachments/assets/127e8ef6-ce7d-4a5b-b936-a1259a00a96a" />


