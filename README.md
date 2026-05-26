*Este proyecto ha sido creado como parte del currículo de 42 por albustos* 

# Descripcion
**Libft** es una librería en C desarrollada como parte del currículo de la escuela 42. El objetivo del proyecto es reimplementar un conjunto de funciones estándar de la librería de C, así como otras utilidades adicionales, para comprender en profundidad el funcionamiento interno de estas funciones y mejorar las habilidades en programación en bajo nivel.

Esta librería servirá como base para proyectos posteriores, proporcionando herramientas reutilizables para manejo de memoria, cadenas, caracteres y listas enlazadas.

## I - Funciones de libc

En este primer apartado recreamos algunas de las funciones nativas del estandar libc: 


### Tipos y caracteres

| Función        | Parámetros | Descripción |
|----------------|------------|--------------|
| ft_isalpha     | int c      | Comprueba si el carácter es alfabético |
| ft_isdigit     | int c      | Comprueba si el carácter es un dígito |
| ft_isalnum     | int c      | Comprueba si es alfanumérico |
| ft_isascii     | int c      | Comprueba si pertenece a ASCII |
| ft_isprint     | int c      | Comprueba si es imprimible |
| ft_toupper     | int c      | Convierte a mayúscula |
| ft_tolower     | int c      | Convierte a minúscula |

---

### Memoria

| Función        | Parámetros                              | Descripción |
|----------------|------------------------------------------|--------------|
| ft_memset      | void *s, int c, size_t n                | Rellena memoria con un valor |
| ft_bzero       | void *s, size_t n                       | Pone a cero un bloque de memoria |
| ft_memcpy      | void *dst, const void *src, size_t n    | Copia memoria |
| ft_memmove     | void *dst, const void *src, size_t n    | Copia memoria de forma segura |
| ft_memchr      | const void *s, int c, size_t n          | Busca un byte en memoria |
| ft_memcmp      | const void *s1, const void *s2, size_t n| Compara memoria |
| ft_calloc      | size_t count, size_t size               | Reserva memoria inicializada a cero |

---

### Strings

| Función        | Parámetros | Descripción |
|----------------|------------|--------------|
| ft_strlen      | const char *s | Calcula la longitud de una cadena |
| ft_strlcpy     | char *dst, const char *src, size_t size | Copia string con límite |
| ft_strlcat     | char *dst, const char *src, size_t size | Concatena strings con límite |
| ft_strchr      | const char *s, int c | Busca un carácter en string |
| ft_strrchr     | const char *s, int c | Busca desde el final |
| ft_strncmp     | const char *s1, const char *s2, size_t n | Compara strings |
| ft_strnstr     | const char *haystack, const char *needle, size_t len | Busca substring |
| ft_atoi        | const char *nptr | Convierte string a entero |
| ft_strdup      | const char *s | Duplica una cadena |

--- 

## II - Funciones adicionales
| Función        | Parámetros                              | Descripción |
|----------------|------------------------------------------|--------------|
| ft_substr      | char const *s, unsigned int start, size_t len | Extrae una subcadena |
| ft_strjoin     | char const *s1, char const *s2         | Une dos cadenas |
| ft_strtrim     | char const *s1, char const *set        | Elimina caracteres al inicio y final |
| ft_split       | char const *s, char c                   | Divide una cadena en un array |
| ft_itoa        | int n                                   | Convierte entero a string |
| ft_strmapi     | char const *s, char (*f)(unsigned int, char) | Aplica función a cada carácter |
| ft_striteri    | char * s, void (* f)(unsigned int, char *)| Modifica cada carácter in-place |
| ft_putchar_fd  | char c, int fd                          | Escribe carácter en file descriptor |
| ft_putstr_fd   | char *s, int fd                         | Escribe string en file descriptor |
| ft_putendl_fd  | char *s, int fd                         | Escribe string + salto de línea |
| ft_putnbr_fd   | int n, int fd                           | Escribe número en file descriptor |
## III - Listas enlazadas
| Función        | Parámetros                              | Descripción |
|----------------|------------------------------------------|--------------|
| ft_lstnew      | void *content                           | Crea un nuevo nodo de lista |
| ft_lstadd_front| t_list **lst, t_list *new              | Añade nodo al inicio |
| ft_lstsize     | t_list *lst                            | Cuenta nodos de la lista |
| ft_lstlast     | t_list *lst                            | Devuelve el último nodo |
| ft_lstadd_back | t_list **lst, t_list *new              | Añade nodo al final |
| ft_lstdelone   | t_list *lst, void (*del)(void *)       | Elimina un nodo |
| ft_lstclear    | t_list **lst, void (*del)(void *)      | Elimina toda la lista |
| ft_lstiter     | t_list *lst, void (*f)(void *)         | Aplica función a cada nodo |
| ft_lstmap      | t_list *lst, void *(*f)(void *), void (*del)(void *) | Crea nueva lista transformada |

# Instrucciones

# Recursos
## Uso de IA
