# Data Structure Basic Programming Using C & C++

This project is focused on implementing and understanding basic data structures using C and C++. It covers fundamental data structures such as arrays, linked lists, stacks, queues, trees, graphs, and hash tables. Through this project, you will learn how to manipulate and implement these structures to solve various real-world problems.

## Project Overview

This project includes multiple C and C++ programs that demonstrate the implementation and operations of various data structures. The goal is to provide an educational resource for students and developers to learn the core concepts of data structures in C/C++.

### Key Data Structures Covered:
- **Arrays**
- **Linked Lists (Singly and Doubly)**
- **Stacks**
- **Queues**
- **Binary Trees**
- **Graphs (Adjacency Matrix and Adjacency List)**
- **Hash Tables**
- **Heaps (Binary Heaps)**

### Programming Languages:
- **C**
- **C++**

### Prerequisites:
- Basic knowledge of C and C++ programming.
- Understanding of algorithms and time complexity.
- Familiarity with pointers and memory management in C and C++.

## Features

1. **Array Operations**: Insertion, deletion, and traversal of arrays.
2. **Linked List Operations**: Singly and doubly linked lists with insertion, deletion, and search functions.
3. **Stack Implementation**: Push, pop, and peek operations using both arrays and linked lists.
4. **Queue Implementation**: Enqueue and dequeue operations using both arrays and linked lists.
5. **Binary Tree Operations**: Insertion, deletion, traversal (pre-order, in-order, post-order), and search.
6. **Graph Implementation**: Graph creation using adjacency matrix and adjacency list, with depth-first search (DFS) and breadth-first search (BFS) traversal.
7. **Hash Table Operations**: Insertion, deletion, and search using a simple hashing function.
8. **Heap Operations**: Insertion and extraction from a binary heap.

## File Structure

```
/DataStructureBasic
│
├── /src
│   ├── array.c
│   ├── linked_list.c
│   ├── stack.c
│   ├── queue.c
│   ├── tree.c
│   ├── graph.c
│   ├── hashtable.c
│   └── heap.c
│
├── /include
│   ├── array.h
│   ├── linked_list.h
│   ├── stack.h
│   ├── queue.h
│   ├── tree.h
│   ├── graph.h
│   ├── hashtable.h
│   └── heap.h
│
├── /bin
│   └── data_structure_program
│
├── README.md
└── Makefile
```

## How to Run the Code

### Clone the repository:
```bash
git clone https://github.com/yourusername/DataStructureBasic.git
cd DataStructureBasic
```

### Compile the Code:
You can compile the code using a Makefile or manually with `gcc`/`g++`.

To compile with the Makefile:
```bash
make
```

To compile manually for C programs:
```bash
gcc -o data_structure_program src/*.c
```

To compile manually for C++ programs:
```bash
g++ -o data_structure_program src/*.cpp
```

### Running the Program:
Once the program is compiled, you can run it using the following command:

```bash
./data_structure_program
```

## Example Usage

- **Arrays**:
  - Insert elements into an array.
  - Perform search and sort operations.

- **Linked Lists**:
  - Create a linked list and perform insertion and deletion operations.
  - Traverse the linked list and display the elements.

- **Stacks and Queues**:
  - Implement and test stack and queue operations (push, pop, enqueue, dequeue).

- **Trees**:
  - Insert nodes into a binary tree.
  - Perform in-order, pre-order, and post-order tree traversals.

- **Graphs**:
  - Create a graph using an adjacency matrix and adjacency list.
  - Perform depth-first and breadth-first traversal.

## Contributing

Contributions are welcome! Feel free to fork the repository, create a new branch, and submit a pull request.

### Steps to Contribute:
1. Fork this repository.
2. Create a new branch for your feature.
3. Implement your feature or fix bugs.
4. Write unit tests (if necessary).
5. Submit a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

### Notes:
- Adjust the file names in the file structure according to your actual project structure.
- You can provide more specific instructions or examples if your project contains specific functions or advanced features that need explaining.

