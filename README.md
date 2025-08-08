

# Contact Management System  
**Course:** CSE115 – Introduction to Programming Language (Programming Language I)  
**Project Type:** Console-based Application  
**Language:** C  

---

## 📌 Project Overview  
The **Contact Management System** is a simple, menu-driven C program that allows users to store, search, update, and delete contact information.  
This project demonstrates the use of fundamental C programming concepts, including:  

- File handling  
- Structures (`struct`)  
- Functions  
- Arrays & Strings  
- Conditional statements & loops  

The system ensures persistent storage by saving contact data in a file so that it remains available between program runs.

---

## 🎯 Features  
1. **Add a new contact** – Store a contact’s name, phone number, email, and address.  
2. **View all contacts** – Display all stored contacts in a formatted table.  
3. **Search contact** – Find a contact by name or phone number.  
4. **Update contact** – Modify details of an existing contact.  
5. **Delete contact** – Remove a contact from the system.  
6. **Save & Exit** – Ensure all changes are stored in the file.  

---

## 🛠️ Technologies Used  
- **Programming Language:** C  
- **Compiler:** GCC (GNU Compiler Collection)  
- **File Handling:** `.txt` file for data storage  
- **Development Environment:** Code::Blocks / Dev-C++ / VS Code (Any C compiler supported)  

---

## 📂 File Structure  
```
ContactManagementSystem/
│
├── main.c                # Main source code
├── contacts.txt          # Data file storing all contacts
├── README.md             # Project documentation (this file)
└── LICENSE (optional)
```

---

## 🚀 How to Run the Project  

### **1. Clone or Download the Project**
```bash
git clone https://github.com/your-username/contact-management-system.git
```

### **2. Compile the Program**
Using GCC:
```bash
gcc main.c -o contact_manager
```

### **3. Run the Executable**
```bash
./contact_manager
```

---

## 🧪 Sample Run  
```
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
```

---

## 📖 Learning Outcomes  
By completing this project, I learned:  
- How to use **structures** to organize related data.  
- Implementing **file I/O** for persistent data storage.  
- Creating **modular functions** for better code organization.  
- Using **string manipulation** functions in C.  
- Designing a **menu-driven program** with loops and conditionals.  

---

## 👨‍💻 Author  
**Name:** Tahsinul Mohsin
**Student ID:** 2524687642
**Course Instructor:** Mirza Mohammad Lutfe Elahi [MLE]

---

## 📜 License  
This project is created for academic purposes under **CSE115**. You are free to use and modify it for learning purposes.

