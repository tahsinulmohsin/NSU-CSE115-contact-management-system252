# NSU-CSE115-contact-management-system252
  Contact Management System
  Course: CSE115 – Introduction to Programming Language (Programming Language I)
  Project Type: Console-based Application
  Language: C

📌 Project Overview
The Contact Management System is a simple, menu-driven C program that allows users to store, search, update, and delete contact information.
This project demonstrates the use of fundamental C programming concepts, including:

File handling

Structures (struct)

Functions

Arrays & Strings

Conditional statements & loops

The system ensures persistent storage by saving contact data in a file so that it remains available between program runs.

🎯 Features
Add a new contact – Store a contact’s name, phone number, email, and address.

View all contacts – Display all stored contacts in a formatted table.

Search contact – Find a contact by name or phone number.

Update contact – Modify details of an existing contact.

Delete contact – Remove a contact from the system.

Save & Exit – Ensure all changes are stored in the file.

🛠️ Technologies Used
Programming Language: C

Compiler: GCC (GNU Compiler Collection)

File Handling: .txt file for data storage

Development Environment: Code::Blocks / Dev-C++ / VS Code (Any C compiler supported)

📂 File Structure
bash
Copy
Edit
ContactManagementSystem/
│
├── main.c                # Main source code
├── contacts.txt          # Data file storing all contacts
├── README.md             # Project documentation (this file)
└── LICENSE (optional)
🚀 How to Run the Project
1. Clone or Download the Project
bash
Copy
Edit
git clone https://github.com/your-username/contact-management-system.git
2. Compile the Program
Using GCC:

bash
Copy
Edit
gcc main.c -o contact_manager
3. Run the Executable
bash
Copy
Edit
./contact_manager
🧪 Sample Run
mathematica
Copy
Edit
===== Contact Management System =====
1. Add Contact
2. View Contacts
3. Search Contact
4. Update Contact
5. Delete Contact
6. Exit
Enter your choice: 1

Enter Name: John Doe
Enter Phone: +8801712345678
Enter Email: john@example.com
Enter Address: Dhaka, Bangladesh

Contact added successfully!
📖 Learning Outcomes
By completing this project, I learned:

How to use structures to organize related data.

Implementing file I/O for persistent data storage.

Creating modular functions for better code organization.

Using string manipulation functions in C.

Designing a menu-driven program with loops and conditionals.

👨‍💻 Author
Name: [Your Name]
Student ID: [Your Student ID]
Course Instructor: [Instructor Name]

📜 License
This project is created for academic purposes under CSE115. You are free to use and modify it for learning purposes.
