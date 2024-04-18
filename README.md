# libft

A reimplementation of standard C library functions created as part of the 42 curriculum.

## Philosophy

The primary focus of a 42 libft project is educational:

* **Understanding C fundamentals:**  Reinforce concepts of memory management, pointers, and data structures.
* **Replicating standard behavior:** Learn the intricacies and edge cases of common C functions.
* **Coding with constraints:** Adherence to 42's strict code normalization rules (the 'Norm').

## Functions

**Mandatory Part**

* **Memory Management:**
    * `ft_memset`
    * `ft_bzero`
    * `ft_memcpy`
    * `ft_memccpy`
    * `ft_memmove`
    * `ft_memchr`
    * `ft_memcmp`
    * `ft_calloc` 
* **String Manipulation:**
    * `ft_strlen`
    * `ft_isalpha`
    * `ft_isdigit`
    * `ft_isalnum` 
    * `ft_isascii`
    * `ft_isprint`
    * `ft_toupper`
    * `ft_tolower`
    * `ft_strchr`
    * `ft_strrchr`
    * `ft_strncmp`
    * `ft_strlcpy`
    * `ft_strlcat`
    * `ft_strnstr`
    * `ft_atoi`
    * `ft_strdup`
    * `ft_substr`
    * `ft_strjoin`
    * `ft_strtrim`
    * `ft_split` 
    * `ft_itoa`
* **Linked Lists (bonus):**
   * `ft_lstnew`
   * `ft_lstadd_front`
   * `ft_lstsize`
   * `ft_lstlast`
   * `ft_lstadd_back`
   * `ft_lstdelone`
   * `ft_lstclear`
   * `ft_lstiter`
   * `ft_lstmap`


## Usage

Run ```Make``` command to compile the library, to compile with bonus files use ```Make bonus```, then add the header _libft.h_ to your project and compile together with _libft.a_.

