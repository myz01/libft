**This project has been created as part of the 42 curriculum by muhabin3**

# libft

## 📌 Description

**libft** is a personal C library built from scratch, recreating a set of standard `libc` functions plus custom utilities for string handling, memory management, and linked lists. 

The library is split into three parts:

- **Part 1 — Libc replication**: reimplementations of standard C functions of libc counterparts.
- **Part 2 — Additional functions**: custom string/utility functions not in standard libc.
- **Part 3 — Linked list**: a full singly linked list implementation.

---

## ⚙️ Instructions

### Compilation

```bash
make all        # builds libft.a (mandatory part only)
make clean      # removes object files
make fclean     # removes object files AND libft.a
make re         # fclean + full rebuild
```

### Usage

1. Include the header in your source file:
   ```
   #include "libft.h"
   ```
2. Compile and link against the compiled archive:
   ```bash
   gcc [your_program].c -L. -lft -o [your_program]
   ```
3. Make sure `libft.a` and `libft.h` are in the same directory as your project.

---

## 🧩 Library Overview

### Part 1 — Libc Functions

| Description | Functions |
|---|---|
| Checking on character assign | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_ascii`, `ft_isprint` |
| checking the length of character | `ft_strlen` |
| To change the list of words to repepetive words | `ft_memset`, `ft_bzero` |
| to copy the source of memory to the destination | `ft_memcpy`, `ft_memmove` (incase of overlap) |
| to count the length of the words copies/catenates | `ft_strlcpy`, `ft_strlcat` |
| to change the words to uppercase or lowercase | `ft_toupper`, `ft_tolower` |
| to search the first word letter and print the rest | `ft_strchr`, `ft_strrchr` (reverse) |
| to compare the string based on the bytes provide | `ft_strncmp` |
| to search the first word letter in a range and print the rest | `ft_memchr` |
| to compare any type based on the bytes provide | `ft_memcmp` |
| to search the word inside the sentences and print the rest | `ft_strnstr` |
| to change from ASCII to integer | `ft_atoi` |
| to allocate memory (same as malloc) and the memory set to zero | `ft_calloc` |

### Part 2 — Additional Functions

| Description | Functions |
|---|---|
| to allocate memory for substring then return substring from start[i] to len in string | `ft_substr` |
| to allocate memory based on concatenating of string s1 and s2 | `ft_strjoin` |
| to trim string from beginning and last of index that same as set | `ft_strtrim` |
| to split/trim each word from sentence into each token with remove deliminator | `ft_split` |
| to turn integer to ASCII using method allocate memory by malloc | `ft_itoa` |
| to sweep from function to string thru one by one character | `ft_strmapi` |
| to update the char changes one by one from same string | `ft_striteri` |
| File Descriptor | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` |

### Part 3 — Linked List (Bonus)

| Description | Functions |
|---|---|
| to do first node include end with NULL | `ft_lstnew` |
| to add at front on existing linked list without affect it | `ft_lstadd_front` |
| to get size of linked list nodes used | `ft_lstsize` |
| to get the last node before NULL of linked list | `ft_lstlast` |
| to add at back on existing linked list without affect it | `ft_lstadd_back` |
| to perform a delete node without affect previous and next node | `ft_lstdelone` |
| to perform a complete delete for every nodes in linked list | `ft_lstclear` |
| to perform a specific function helper on every each of nodes in linked list | `ft_lstiter` |
| to execute ft_lstiter on a new list that just created, will use del as ft_lstclear if needed | `ft_lstmap` |


---

## 📚 Resources

- [C Standard Library Reference — cppreference](https://en.cppreference.com/w/c)
- [Linux man pages](https://linux.die.net/man/)
- [Visual C programme](https://pythontutor.com/visualize.html#mode=display)
- [GeeksforGeeks](https://www.geeksforgeeks.org)
- [W3Schools](https://www.w3schools.com/c/)
- [youtube](https://www.youtube.com/)
- `[Community and etc]`


### AI usage disclosure

AI (Claude) was used for:
- [/] Explaining the logic/algorithm/flow behind specific functions (e.g. how `ft_split` should handle delimiters) without generating final code
- [/] Debugging segfaults / memory leaks by discussing `valgrind` output
- [/] To do a nice look decorative version of README for github purpose only

AI was **not** used for:
- [/] Writing the core function implementations
