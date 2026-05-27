*Este proyecto ha sido creado como parte del currículo de 42 por [albustos](https://github.com/AlfonsoJBF)*

<p align="center">
  <img src="https://eu.badgr.com/public/issuers/tktrAbCnRtiXNxG1dgqKMQ" alt="42 Logo" width="150"/>
</p>

<h1 align="center">✏️ Libft — @42 Madrid</h1>

<p align="center">
  <b><i>Mi propia biblioteca estándar de C: una reimplementación de funciones esenciales de la libc y utilidades personalizadas.</i></b>
</p>

<p align="center">
  <a href="https://github.com/AlfonsoJBF/libft">
    <img src="https://img.shields.io/github/languages/top/AlfonsoJBF/libft?style=for-the-badge&logo=c&logoColor=white&color=00599C">
  </a>
  <a href="https://github.com/AlfonsoJBF/libft/stargazers">
    <img src="https://img.shields.io/github/stars/AlfonsoJBF/libft?style=for-the-badge&color=8257E6">
  </a>
  <a href="https://github.com/AlfonsoJBF/libft/issues">
    <img src="https://img.shields.io/github/issues/AlfonsoJBF/libft?style=for-the-badge&color=EF4444">
  </a>
</p>

---

## 📍 Navegación Rápida
📌 [Descripción](#-descripción) • 
🛠️ [Librería al Detalle](#-librería-al-detalle) • 
🚀 [Instrucciones de Compilación](#-instrucciones) • 
📚 [Recursos y Referencias](#-recursos)

---

## 📝 Descripción

**Libft** es el primer proyecto fundacional del currículo de la escuela 42. El objetivo principal es reescribir desde cero un conjunto de funciones estándar de la biblioteca de C (`libc`), así como desarrollar funciones adicionales que no están presentes de forma nativa en el lenguaje.

A través de este proyecto, se profundiza en la gestión manual de memoria, la manipulación de punteros, operaciones lógicas a bajo nivel y estructuras de datos dinámicas como las listas enlazadas. Esta librería se convierte en una herramienta central y reutilizable para resolver los desafíos de programación en los proyectos posteriores del cursado.

---

## 🛠️ Librería al Detalle

A continuación se detallan todas las funciones que componen la biblioteca. **Puedes hacer clic sobre el nombre de cualquier función para inspeccionar su código fuente.**

### I. Funciones de libc

#### Tipos y caracteres
| Función | Parámetros | Descripción |
| :--- | :--- | :--- |
| [ft_isalpha](./ft_isalpha.c) | `int c` | Comprueba si el carácter es alfabético |
| [ft_isdigit](./ft_isdigit.c) | `int c` | Comprueba si el carácter es un dígito |
| [ft_isalnum](./ft_isalnum.c) | `int c` | Comprueba si es alfanumérico |
| [ft_isascii](./ft_isascii.c) | `int c` | Comprueba si pertenece a ASCII |
| [ft_isprint](./ft_isprint.c) | `int c` | Comprueba si es imprimible |
| [ft_toupper](./ft_toupper.c) | `int c` | Convierte a mayúscula |
| [ft_tolower](./ft_tolower.c) | `int c` | Convierte a minúscula |

#### Memoria
| Función | Parámetros | Descripción |
| :--- | :--- | :--- |
| [ft_memset](./ft_memset.c) | `void *s, int c, size_t n` | Rellena memoria con un valor específico |
| [ft_bzero](./ft_bzero.c) | `void *s, size_t n` | Pone a cero un bloque de memoria |
| [ft_memcpy](./ft_memcpy.c) | `void *dst, const void *src, size_t n` | Copia un área de memoria |
| [ft_memmove](./ft_memmove.c) | `void *dst, const void *src, size_t n` | Copia memoria de forma segura (gestiona solapamientos) |
| [ft_memchr](./ft_memchr.c) | `const void *s, int c, size_t n` | Busca un byte específico en la memoria |
| [ft_memcmp](./ft_memcmp.c) | `const void *s1, const void *s2, size_t n` | Compara dos bloques de memoria |
| [ft_calloc](./ft_calloc.c) | `size_t count, size_t size` | Reserva memoria dinámica inicializada a cero |

#### Cadenas de caracteres (Strings)
| Función | Parámetros | Descripción |
| :--- | :--- | :--- |
| [ft_strlen](./ft_strlen.c) | `const char *s` | Calcula la longitud de una cadena |
| [ft_strlcpy](./ft_strlcpy.c) | `char *dst, const char *src, size_t size` | Copia un string garantizando la terminación en nulo |
| [ft_strlcat](./ft_strlcat.c) | `char *dst, const char *src, size_t size` | Concatena strings garantizando la terminación en nulo |
| [ft_strchr](./ft_strchr.c) | `const char *s, int c` | Busca la primera aparición de un carácter en un string |
| [ft_strrchr](./ft_strrchr.c) | `const char *s, int c` | Busca la última aparición de un carácter en un string |
| [ft_strncmp](./ft_strncmp.c) | `const char *s1, const char *s2, size_t n` | Compara dos strings hasta `n` caracteres |
| [ft_strnstr](./ft_strnstr.c) | `const char *haystack, const char *needle, size_t len` | Localiza una subcadena dentro de un límite de longitud |
| [ft_atoi](./ft_atoi.c) | `const char *nptr` | Convierte una cadena de caracteres a número entero |
| [ft_strdup](./ft_strdup.c) | `const char *s` | Duplica una cadena reservando memoria dinámicamente |

---

### II. Funciones Adicionales
Funciones que no pertenecen a la librería estándar de C o que tienen un enfoque especializado para el ecosistema de 42.

| Función | Parámetros | Descripción |
| :--- | :--- | :--- |
| [ft_substr](./ft_substr.c) | `char const *s, unsigned int start, size_t len` | Extrae una sección (subcadena) de un string |
| [ft_strjoin](./ft_strjoin.c) | `char const *s1, char const *s2` | Une dos cadenas de caracteres en una nueva |
| [ft_strtrim](./ft_strtrim.c) | `char const *s1, char const *set` | Elimina caracteres específicos del inicio y final de un string |
| [ft_split](./ft_split.c) | `char const *s, char c` | Divide una cadena en una matriz utilizando un delimitador |
| [ft_itoa](./ft_itoa.c) | `int n` | Convierte un número entero en una cadena de caracteres |
| [ft_strmapi](./ft_strmapi.c) | `char const *s, char (*f)(unsigned int, char)` | Aplica una función a cada carácter creando una nueva cadena |
| [ft_striteri](./ft_striteri.c) | `char *s, void (*f)(unsigned int, char *)` | Modifica in-place cada carácter aplicando una función |
| [ft_putchar_fd](./ft_putchar_fd.c) | `char c, int fd` | Escribe un carácter en el File Descriptor indicado |
| [ft_putstr_fd](./ft_putstr_fd.c) | `char *s, int fd` | Escribe un string en el File Descriptor indicado |
| [ft_putendl_fd](./ft_putendl_fd.c) | `char *s, int fd` | Escribe un string seguido de un salto de línea en el FD |
| [ft_putnbr_fd](./ft_putnbr_fd.c) | `int n, int fd` | Escribe un número entero en el File Descriptor indicado |

---

### III. Listas Enlazadas (Bonus)
Herramientas avanzadas para la manipulación de estructuras de datos dinámicas basadas en la estructura `t_list`.

| Función | Parámetros | Descripción |
| :--- | :--- | :--- |
| [ft_lstnew](./ft_lstnew.c) | `void *content` | Crea un nuevo nodo con el contenido indicado |
| [ft_lstadd_front](./ft_lstadd_front.c) | `t_list **lst, t_list *new` | Añade un nodo al principio de la lista |
| [ft_lstsize](./ft_lstsize.c) | `t_list *lst` | Cuenta el número de elementos de la lista |
| [ft_lstlast](./ft_lstlast.c) | `t_list *lst` | Devuelve el último nodo de la lista |
| [ft_lstadd_back](./ft_lstadd_back.c) | `t_list **lst, t_list *new` | Añade un nodo al final de la lista |
| [ft_lstdelone](./ft_lstdelone.c) | `t_list *lst, void (*del)(void *)` | Libera la memoria de un nodo usando la función `del` |
| [ft_lstclear](./ft_lstclear.c) | `t_list **lst, void (*del)(void *)` | Elimina y libera una lista completa y sus contenidos |
| [ft_lstiter](./ft_lstiter.c) | `t_list *lst, void (*f)(void *)` | Itera la lista aplicando la función `f` a cada nodo |
| [ft_lstmap](./ft_lstmap.c) | `t_list *lst, void *(*f)(void *), void (*del)(void *)` | Transforma una lista aplicando `f` y genera una nueva |

---

## 🚀 Instrucciones

### Estructura del Makefile
El proyecto cuenta con un archivo `Makefile` automatizado con soporte para compilación incremental.
* **NAME**: `libft.a` (Librería estática binaria final)
* **SRCS**: Recopilación dinámica de archivos mediante `wildcard *.c`
* **FLAGS**: `-Wall -Wextra -Werror` para asegurar un código robusto y libre de advertencias.

### Comandos de Compilación

| Comando | Acción |
| :--- | :--- |
| `make` o `make all` | Compila los fuentes `.c` a objetos `.o` y empaqueta la librería `libft.a` mediante `ar -rcs`. |
| `make clean` | Elimina de forma segura todos los archivos objeto (`.o`) intermedios. |
| `make fclean` | Elimina los objetos (`.o`) y destruye el binario final generado (`libft.a`). |
| `make re` | Fuerza una recompilación completa desde cero (`fclean` + `all`). |

---

## 📚 Recursos

### Documentación de Referencia
* **Estándar Oficial de C:** [ISO C Standard (C99 / C11)](https://www.iso.org/standard/74528.html)
* **Libro de Cabecera:** [The C Programming Language (Kernighan & Ritchie)](https://en.wikipedia.org/wiki/The_C_Programming_Language)
* **Librerías del Sistema:** [GNU C Library (glibc)](https://www.gnu.org/software/libc/manual/) y especificaciones de [POSIX](https://pubs.opengroup.org/onlinepubs/9699919799/).
* **Manuales de Linux en Terminal:**
  ```bash
  man 3 isalpha
  man 3 memset
  man 3 strlen
  ```
### Entornos de Testeo (TDD)

Agradecimientos especiales a los desarrolladores de los siguientes suites de pruebas, vitales para el desarrollo guiado por pruebas:

- [libft-tester de mapena-z](https://github.com/mapena-z/libft-tester)
- [libftTester de Tripouille](https://github.com/Tripouille/libftTester)

### Uso de IA

En cumplimiento con las normativas del proyecto:

Uso: Se utilizó Inteligencia Artificial generativa principalmente para la interpretación del comportamiento de las funciones originales ante casos extremos (Edge Cases), la depuración estructural de fugas de memoria (memory leaks) en la gestión de listas enlazadas, y en el formateo estético del presente documento README.md.

Exclusión: No se empleó IA para la escritura directa de la lógica de código ni el algoritmo de las funciones base.
