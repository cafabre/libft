<p align="center">
	<img src="assets/libft_logo.png">
</p>

<h1 align="center"> 📝 Libft - Custom C Library</h1>

<p align="center">
	<img src="assets/score.png">
</p>

## 📖 Description
This library is a dual-module project designed to deepen the understanding of C programming, data structures, and memory management. It consists of:

* **Libft Core**: A comprehensive collection of recreated standard C library functions.
* **Custom Printf**: A specialized module for formatted output using variadic functions.

---

## 🛠️ Installation & Compilation

### Prerequisites
* The `gcc` compiler

### Instructions

#### Clone the project
```bash
git clone https://github.com/cafabre/libft.git libft
cd libft
```

#### Build the library
```bash
make
```

## ⚙️ Usage
This repository does not contain a `main` function. It is a static library `(libft.a)` designed to be included in other C projects within the 42 curriculum. To use it, include the header in your code and link the library during compilation:
```bash
#include "libft.h"
```

---

## 🎨 Module 1 : Custom Printf
The library includes a custom version of the `printf` function, capable of handling various format specifiers. It is built using variadic functions to process a flexible number of arguments.

| File | Responsibility |
| :--- | :--- |
| `ft_printf.c` | Main engine and entry point of the function. |
| `ft_handle_format.c` | Logic for parsing and routing format specifiers (`%`). |
| `ft_print_int.c` / `ft_print_number.c` | Handles signed integers and basic numeric output. |
| `ft_print_hex.c` | Manages hexadecimal conversions (lower/uppercase). |
| `ft_print_ptr.c` | Specifically handles memory address formatting. |
| `ft_printf_char.c` / `ft_print_str.c` | Handles single characters and string outputs. |

**Supported Specifiers:** `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`.

---

## 📚 Module 2 : Library Functions

### 🔹 Character Checks & Manipulation
| Function | Description |
| :--- | :--- |
| `ft_isalnum` | Checks for an alphanumeric character. |
| `ft_isalpha` | Checks for an alphabetic character. |
| `ft_isascii` | Checks if character fits into the ASCII set. |
| `ft_isdigit` | Checks for a digit (0 through 9). |
| `ft_isprint` | Checks for any printable character. |
| `ft_isspace` | Checks for white-space characters (space, tab, etc.). |
| `ft_tolower` | Converts a letter to lowercase. |
| `ft_toupper` | Converts a letter to uppercase. |

### 🔹 Memory Management
| Function | Description |
| :--- | :--- |
| `ft_bzero` | Erases the data in the n bytes of the memory by writing zeros. |
| `ft_calloc` | Allocates memory and initializes all bytes to zero. |
| `ft_memchr` | Scans memory for the first occurrence of a specific character. |
| `ft_memcmp` | Compares two memory areas byte by byte. |
| `ft_memcpy` | Copies memory area from source to destination. |
| `ft_memmove` | Copies memory area with safety for overlapping regions. |
| `ft_memset` | Fills memory with a constant byte. |

### 🔹 String Manipulation
| Function | Description |
| :--- | :--- |
| `ft_split` | Splits a string into an array of strings using a delimiter. |
| `ft_strchr` | Locates the first occurrence of a character in a string. |
| `ft_strcmp` | Compares two strings lexicographically. |
| `ft_strdup` | Creates a duplicate of a string using malloc. |
| `ft_striteri` | Applies a function to each character of a string (index aware). |
| `ft_strjoin` | Concatenates two strings into a new allocated string. |
| `ft_strlcat` | Appends a string to another with size-bounded security. |
| `ft_strlcpy` | Copies a string to a buffer with size-bounded security. |
| `ft_strlen` | Calculates the exact length of a string. |
| `ft_strmapi` | Creates a new string by applying a function to each character. |
| `ft_strncmp` | Compares two strings up to a specified number of characters. |
| `ft_strnstr` | Locates a substring within a string, limited by length. |
| `ft_strrchr` | Locates the last occurrence of a character in a string. |
| `ft_strtrim` | Trims specific characters from the start and end of a string. |
| `ft_substr` | Extracts a specific portion (substring) from a string. |

### 🔹 Number Conversions
| Function | Description |
| :--- | :--- |
| `ft_atof` | Converts a string to a double (floating-point number). |
| `ft_atoi` | Converts a string to an integer. |
| `ft_itoa` | Converts an integer to a null-terminated string. |
| `ft_utoa` | Converts an unsigned integer to a null-terminated string. |

### 🔹 Output Functions
| Function | Description |
| :--- | :--- |
| `ft_putchar_fd` | Outputs a single character to a specific file descriptor. |
| `ft_putendl_fd` | Outputs a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Outputs an integer to a specific file descriptor. |
| `ft_putstr_fd` | Outputs a string to a specific file descriptor. |

### 🔹 Linked Lists `Bonus`
| Function | Description |
| :--- | :--- |
| `ft_lstadd_back` | Adds a new element at the end of the list. |
| `ft_lstadd_front` | Adds a new element at the beginning of the list. |
| `ft_lstclear` | Deletes and frees an entire list and its content. |
| `ft_lstdelone` | Deletes and frees a single element's content. |
| `ft_lstiter` | Iterates through a list and applies a function to each element. |
| `ft_lstlast` | Returns the last element of the list. |
| `ft_lstmap` | Creates a new list by applying a function to each element. |
| `ft_lstnew` | Creates a new list node/element. |
| `ft_lstsize` | Counts the total number of elements in a list. |
