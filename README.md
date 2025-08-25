

# Contact Management System
**Course:** CSE115 – Introduction to Programming Language (Programming Language I)  
**Project Type:** Console-based Application  
**Language:** C  

---

## 📌 Project Overview
The **Contact Management System** is a simple, menu-driven C program that allows users to store and view contact information.  
This project demonstrates the use of fundamental C programming concepts, including:  

- File handling  
- Structures (`struct`)  
- Functions  
- Arrays & Strings  
- Conditional statements & loops
- File handling (`fopen`, `fscanf`, `fprintf`, `fclose`) for persistent storage.  
- Pointers (used with file operations and arrays).  
- Iteration (loops and menu-driven control).  
- String functions (`fgets`, `strstr`, `strcmp`) for input and searching.  


The system ensures persistent storage by saving contact data in a text file so that it remains available between program runs.

---

## 🚀 Features
- ➕ **Add Contact**  
  Input a contact’s Name, Phone, and Email and save it to a file (`contact-book.txt`).  

- 📖 **Show All Contacts**  
  Read and display all stored contacts from the file.  

- 🔍 **Search Contacts**  
  Search by keyword (substring match, case-sensitive) in Name, Phone, or Email.  

- ❌ **Delete Contact**  
  Delete a contact by **exact Name** or **exact Phone**.  
  (Deletes all matches if multiple entries have the same field.)  

- 🚪 **Exit**  
  Cleanly exit the program.  

---

---

## 🛠️ Technologies Used
- **Programming Language:** C  
- **Compiler:** GCC (GNU Compiler Collection)  
- **File Handling:** `.txt` file for data storage (`contact-book.txt`)  
- **Development Environment:** Code::Blocks / Dev-C++ / VS Code (Any C compiler supported)  

---

## 📂 File Structure
```
ContactManagementSystem/
│
├── main.c                # Main source code
├── contact-book.txt      # Data file storing all contacts
├── README.md             # Project documentation (this file)
└── LICENSE (optional)
```

---

## 🚀 How to Run the Project

### **1. Clone or Download the Project**
```bash
git clone https://github.com/tahsinulmohsin/NSU-CSE115-contact-management-system252.git
```

### **2. Compile the Program**
Using GCC:
```bash
gcc main.c -o contact-management
```

### **3. Run the Executable**
```bash
./contact-management
```

---

## 🧪 Sample Run
```
Welcome to the Basic Contact Management System Software.
This program is developed by two noob freshers from the 252 batch at NSU!

1. Add a Contact
2. Show all contacts
3. Search contacts
4. Delete a contact
5. Nah, I will rather exit this program

Enter your choice: 1
Enter Name: John Doe
Enter Phone: +8801712345678
Enter Email: john@example.com

Contact successfully added!!

Enter your choice: 2
Contacts:
Name: John Doe
Phone: +8801712345678
Email: john@example.com
```

---

## 📖 Learning Outcomes
By completing this project, we learned:  
- How to use **structures** to organize related data.  
- Implementing **file I/O** for persistent data storage.  
- Creating **modular functions** for better code organization.  
- Using **string manipulation** functions in C.  
- Designing a **menu-driven program** with loops and conditionals.
---

## 👨‍💻 Author  

**Name:** Tahsinul Mohsin  
**Student ID:** 2524687642  
**Email:** tahsinul.mohsin.252@northsouth.edu  

**Name:** Mohammad Raihan Mustakim Zian  
**Student ID:** 2524666042  
**Email:** mohammad.zian.252@northsouth.edu  

**Course Instructor:** Mirza Mohammad Lutfe Elahi (*MLE*)  
**Lab Instructor:** Shuvodip Biswas  

---

## 📜 License  
This project is created for academic purposes under **CSE115**. You are free to use and modify it for learning purposes.

