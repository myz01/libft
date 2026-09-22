*This project has been created as part of the 42 curriculum by muhabin3*

# libft

## 📌 Description

**libft** is a personal C library built from scratch, recreating a set of standard `libc` functions plus custom utilities for string handling, memory management, and linked lists. It is the foundation library reused across almost every later 42 project (`ft_printf`, `push_swap`, `minishell`, etc.), so correctness and safety here (no leaks, no segfaults, no undefined behavior) matter beyond just this project.

The library is split into three parts:

- **Part 1 — Libc replication**: reimplementations of standard C functions (`ctype.h`, `string.h`, `stdlib.h` subset) with identical behavior to their libc counterparts.
- **Part 2 — Additional functions**: custom string/utility functions not in standard libc, useful for higher-level string manipulation (splitting, trimming, joining, converting).
- **Part 3 — Linked list (bonus)**: a full singly linked list implementation (`t_list`) with creation, insertion, deletion, iteration, and mapping.

---

## ⚙️ Instructions

### Compilation

```bash
make            # builds libft.a (mandatory part only)
make bonus      # builds libft.a including linked list functions
make clean      # removes object files
make fclean     # removes object files AND libft.a
make re         # fclean + full rebuild
```

> ⚠️ Verify these targets match your actual `Makefile`. Adjust if your rule names differ.

### Usage

1. Include the header in your source file:
   ```c
   #include "libft.h"
   ```
2. Compile and link against the compiled archive:
   ```bash
   gcc your_program.c -L. -lft -o your_program
   ```
3. Make sure `libft.a` and `libft.h` are in the same directory as your project, or adjust `-L` / `-I` paths accordingly.

---

## 🧩 Library Overview

### Part 1 — Libc Functions

| Category | Functions |
|---|---|
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| String length | `ft_strlen` |
| Memory fill | `ft_memset`, `ft_bzero` |
| Memory copy | `ft_memcpy`, `ft_memmove` (handles overlap) |
| Bounded copy/concat | `ft_strlcpy`, `ft_strlcat` |
| Case conversion | `ft_toupper`, `ft_tolower` |
| Character search | `ft_strchr`, `ft_strrchr` (reverse search) |
| String compare | `ft_strncmp` |
| Memory search | `ft_memchr` |
| Memory compare | `ft_memcmp` |
| Substring search | `ft_strnstr` |
| String to integer | `ft_atoi` |
| Zero-initialized allocation | `ft_calloc` |

### Part 2 — Additional Functions

| Category | Functions |
|---|---|
| Substring extraction | `ft_substr` — allocates and returns substring from index to length |
| String concatenation | `ft_strjoin` — allocates and returns `s1` + `s2` |
| Trimming | `ft_strtrim` — removes leading/trailing characters found in a given set |
| Splitting | `ft_split` — tokenizes a string by delimiter into an array of strings |
| Integer to string | `ft_itoa` — allocates and returns the string representation of an integer |
| Mapping | `ft_strmapi` — applies a function to each character, returns a new string |
| Iteration | `ft_striteri` — applies a function to each character, modifies in place |
| File descriptor output | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` |

### Part 3 — Linked List (Bonus)

| Category | Functions |
|---|---|
| Node creation | `ft_lstnew` — creates a new node, next set to `NULL` |
| Insertion | `ft_lstadd_front`, `ft_lstadd_back` |
| Traversal/size | `ft_lstsize`, `ft_lstlast` |
| Deletion | `ft_lstdelone` (single node), `ft_lstclear` (entire list) |
| Iteration/mapping | `ft_lstiter` (apply function to each node), `ft_lstmap` (apply function, build new list) |

---

## 📚 Resources

- [C Standard Library Reference — cppreference](https://en.cppreference.com/w/c)
- Linux man pages: `man strlen`, `man memcpy`, `man strchr`, etc. (`man <function_name>` in terminal)
- [42 Norminette documentation](https://github.com/42School/norminette)
- Beej's Guide to C Programming (general C reference)

### AI usage disclosure

> ⚠️ Replace this with what you actually did — do not leave placeholder text.

AI (Claude) was used for:
- [ ] Explaining the logic/algorithm behind specific functions (e.g. how `ft_split` should handle delimiters) without generating final code
- [ ] Debugging segfaults / memory leaks by discussing `valgrind` output
- [ ] Formatting and structuring this README

AI was **not** used for:
- [ ] Writing the core function implementations (state clearly if true)
