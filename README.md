# LIBRARY MANAGEMENT SYSTEM
 ## ABSTRACT
The Library Management System (LMS) is a simple yet efficient application designed to streamline the management of books within a library. This project, hosted on GitHub, enables users to perform core library operations such as adding new books, updating existing records, searching for specific titles, displaying all books, and deleting entries. The system reduces manual effort by storing book information in a structured file format and providing an interactive menu-driven interface for ease of use. It is built using C programming and follows a modular approach with clearly defined functions for each feature. This GitHub-hosted project serves as a practical solution for students, beginners, and developers who want to understand file handling, data structures, and real-world application design in C. The LMS aims to improve accuracy, accessibility, and efficiency in library operations while offering an open-source codebase for further enhancement.

## FEATURES OF THE PROGRAM
1. Book Management

Add new books with details such as ID, title, author, and quantity.

Update existing book records.

Delete books from the system.


2. Search Functionality

Search for books using their unique ID.

Quickly retrieve book information from the stored records.


3. Display All Books

View a complete list of available books.

Organized output including ID, title, author, and stock.


 4. Persistent Data Storage

Uses file handling (books.dat) to store data permanently.

Book details remain saved even after closing the program.


5. Modular Code Structure

Separate functions for each operation (add, display, search, update, delete).

Improves readability and makes the project easy to maintain.


6. User-Friendly Interface

Simple menu-driven console interface.

Easy navigation for beginners and non-technical users.


7. Lightweight and Fast

No external libraries required.

Efficient performance suitable for small to medium-sized libraries.


8. Error Handling

Handles invalid inputs, missing files, and incorrect book IDs gracefully.

## TECHNICAL REQUIREMENTS

1. Programming Language

C Language (ANSI C / GCC compatible)


2. Compiler

Any standard C compiler such as:

GCC (Linux/Windows)

MinGW (Windows)

Clang

Turbo C (for academic use, though not recommended)


3. Operating System

Windows

Linux

macOS


(Program is fully console-based and works on any OS that supports a C compiler.)

4. File Handling Support

Requires permission to create, read, and write to a file named books.dat.

Supports binary file operations (fread, fwrite, fopen, fclose).


5. Hardware Requirements

Minimum 512 MB RAM

Any basic processor (Intel/AMD)

Few MB of free disk space for storing compiled files and data file


6. Development Environment (Recommended)

You may use any IDE such as:

VS Code with C/C++ extensions

Code::Blocks

Dev C++

CLion

Turbo C / Turbo C++ (for academic curriculum)


7. Libraries Used

Standard C libraries:

<stdio.h>

<stdlib.h>

<string.h>


No external libraries required.

8. Execution Requirements

Terminal/Command Prompt access

Ability to compile .c files using gcc filename.c -o output.exe

## FUNCTIONAL REQUIREMENTS

1. Add Book

The system must allow the user to add a new book.

The user must enter book ID, title, author, and quantity.

The system must store this information in the data file.


2. Display All Books

The system must display all books available in the library.

Each record must show ID, title, author name, and quantity.


3. Search for a Book

The system must allow searching for a book using the book ID.

If the book exists, its full details must be displayed.

If not found, the system must show an appropriate message.


4. Update Book Information

The system must allow editing of existing book details.

Users must be able to modify quantity or other fields.


5. Delete a Book Record

The system must provide an option to remove a book permanently.

After deletion, the updated list must be saved to the file.


6. File Storage Management

The system must store all book records in a file (books.dat).

The system must be able to read and write data using binary file handling.


7. User Interaction via Menu

The system must display a menu with available operations.

The user must be able to navigate and select options.


8. Input Validation

The system must validate user input (e.g., non-existing IDs, invalid choices).

Error messages must be shown for incorrect inputs.


9. Exit Program

The system must provide an option to safely exit the application.

Before exiting, data must be saved.

## HOW TO RUN THE PROGRAM 

1. Clone or Download the Repository

Option A: Clone using Git

git clone https://github.com/<your-username>/LIBRARY-MANAGEMENT.git

Option B: Download ZIP

Click Code → Download ZIP

Extract it to any folder



---

2. Navigate to the Project Folder

cd LIBRARY-MANAGEMENT


---

3. Compile the Program

Use any C compiler like GCC.

On Windows (MinGW / VS Code Terminal):

gcc library.c -o library

On Linux / macOS:

gcc library.c -o library

If your main file has a different name, replace library.c with your filename.


---

4. Run the Program

Windows:

library.exe

Linux / macOS:

./library


---

5. Interact With the Menu

Once the program starts, you will see a menu like:

==== LIBRARY MANAGEMENT SYSTEM ====
1. Add Book
2. Display Books
3. Search Book
4. Update Book
5. Delete Book
6. Exit

Choose any option by entering the corresponding number.


---

6. Data Storage

The program automatically creates a file named books.dat

All book records are saved and loaded from this file

Do NOT delete this file if you want to keep your data



Screenshots:




<img width="394" height="343" alt="Screenshot 2025-11-22 182208" src="https://github.com/user-attachments/assets/27bec298-09f9-4e21-b76c-a142a6afe9b0" />




<img width="263" height="454" alt="Screenshot 2025-11-22 182424" src="https://github.com/user-attachments/assets/70db8c7c-83d2-41b4-ade2-239724ee69bf" />




<img width="330" height="216" alt="Screenshot 2025-11-22 182505" src="https://github.com/user-attachments/assets/fd61ca45-a0ab-4a27-b51d-a0fcd5fd9e18" />




<img width="334" height="161" alt="Screenshot 2025-11-22 182534" src="https://github.com/user-attachments/assets/51e2dad4-858d-421e-bb8e-e21bc67e49f0" />



<img width="369" height="95" alt="Screenshot 2025-11-22 182610" src="https://github.com/user-attachments/assets/f3a01367-77b8-4f8d-aca8-d12063251103" />
