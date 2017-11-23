# Libft
My implementation of some of the Standard C Library functions including some additional ones.

### SUMMARY
* [What is libft?](#what-is-libft)
* [What's in it?](#whats-in-it)
	1. [Part 1](#partie-1)
	2. [Part 2](#partie-2)
	3. [Bonus part](#partie-bonus)
	3. [Personal Functions](#fonctions-perso)
* [How does it work?](#how-does-it-work)
* [How do I use the library?](#how-do-i-use-the-library)

### What is libft?
Libft[fr][0][en][1] is an individual project at [42][2] that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

Disclaimer: *Reinventing the wheel is bad, 42 makes us do this just so we can have a deeper understanding of data structures and basic algorithms. At 42 we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the program.*

### What's in it?

As you can see from the [Project instructions][1], there are 4 sections:

1.  **Libc Functions:** Some of the standard C functions
2.  **Additional functions:** Functions 42 deems will be useful for later projects
3.  **Bonus Functions:** Functions 42 deems will be useful for linked list manipulation
4.  **Personal Functions:** Functions I believe will be useful later. [Documented here][3].

Libc functions | Additional functions | Bonus Functions | Personal Functions
:----------- | :-----------: | :-----------: | -----------:
memset		| ft_memalloc		| ft_lstnew		|  
bzero		| ft_memdel		| ft_lstdelone		|  
memcpy		| ft_strnew		| ft_lstdel		|     
memccpy		| ft_strdel		| ft_lstadd		|     
memmove		| ft_strclr		| ft_lstiter		|     
memchr		| ft_striter		| ft_lstmap		| 
memcmp		| ft_striteri		|			| 
strlen		| ft_strmap		|			| 
strdup		| ft_strmapi		|			| 
strcpy		| ft_strequ		|			| 
strncpy		| ft_strnequ		|			| 
strcat		| ft_strsub		| 			| 
strlcat		| ft_strjoin		| 			| 
strchr		| ft_strtrim		| 			| 
strrchr		| ft_strsplit		| 			| 
strstr		| ft_itoa		| 			| 
strnstr		| ft_putchar		| 			| 
strcmp		| ft_putstr		| 			| 
strncmp		| ft_putendl		| 			| 
atoi		| ft_putnbr		| 			| 
isalpha		| ft_putchar_fd		| 			| 
isdigit		| ft_putstr_fd		| 			| 
isalnum		| ft_putendl_fd		| 			| 
isascii		| ft_putnbr_fd		| 			| 
isprint		|			| 			| 
toupper		|			| 			| 
tolower		| 			| 			| 


Notes:

- Most of the the files and function names are namespaced with an **ft** in front. It stands for Fourty Two
- The project instructions require that we put all the source files in the root directory but for the sake of this Github repo, I separate them into sub folders.
- I update this list almost every month with new personal functions. If you don't know what a function does, refer to the [Wiki][3], where I document all my personal functions.

My code is not the best, but it passed all the 42 tests successfully.

#### Partie 1  
Consult man page for these functions :
* ft_memset
* ft_bzero  
* ft_memcpy
* ft_memccpy
* ft_memmove
* ft_memchr
* ft_memcmp
* ft_strlen
* ft_strdup
* ft_strcpy
* ft_strncpy
* ft_strcat
* ft_strncat
* ft_strlcat
* ft_strchr
* ft_strrchr
* ft_strstrs
* ft_strnstr
* ft_strcmp
* ft_strncmp
* ft_atoi
* ft_isalpha
* ft_isdigit
* ft_isalnum
* ft_isascii
* ft_isprint
* ft_toupper
* ft_tolower


#### Partie 2
##### ft_memalloc
> Alloue avec `malloc(3)` et retourne une zone de memoire "fraiche". La memoire allouee est intialisee a 0. Si l'allocation echoue, la fonction renvoie `NULL`.

##### ft_memdel
> Prend en parametre l’adresse d’un pointeur dont la zone pointee doit etre liberee avec `free(3)`, puis le pointeur est mis a `NULL`.

##### ft_strnew
> Alloue avec `malloc(3)` et retourne une chaine de caractere “fraiche” terminee par un `’\0’`. Chaque caractere de la chaine est initialise a `’\0’`. Si l’allocation echoue, la fonction renvoie `NULL`.

##### ft_strdel
> Prend en parametre l’adresse d’une chaine de caracteres qui doit etre liberee avec `free(3)` et son pointeur mis a `NULL`.

##### ft_strclr
> Assigne la valeur `’\0’` a tous les caracteres de la chaine passee en parametre.

##### ft_striter
> Applique la fonction `f` a chaque caractere de la chaine de caracteres passee en parametre. Chaque caractere est passe par adresse a la fonction `f` afin de pouvoir être modifie si necessaire.

##### ft_striteri
> Applique la fonction `f` a chaque caractere de la chaine de caracteres passee en parametre en precisant son index en premier argument. Chaque caractere est passe par adresse a la fonction `f` afin de pouvoir etre modifie si necessaire.

##### ft_strmap
> Applique la fonction `f` a chaque caractere de la chaine de caracteres passee en parametre pour creer une nouvelle chaine “fraiche” avec `malloc(3)` resultant des applications successives de `f`.

##### ft_strmapi
> Applique la fonction `f` a chaque caractere de la chaine de caracteres passee en parametre en precisant son index pour creer une nouvelle chaine “fraiche” avec `malloc(3)` resultant des applications successives de `f`.

##### ft_strequ
> Compare lexicographiquement s1 et s2. Si les deux chaines sont egales, la fonction retourne 1, ou 0 sinon.

##### ft_strnequ
> Compare lexicographiquement s1 et s2 jusqu’a n caracteres maximum ou bien qu’un `’\0’` ait ete rencontre. Si les deux chaines sont egales, la fonction retourne 1, ou 0 sinon.

##### ft_strsub
> Alloue avec `malloc(3)` et retourne la copie "fraiche" d'un troncon de la chaine de caracteres passee en parametre. Le troncon commence a l'index `start` et a pour longueur `len`. Si `start` et `len` ne designent pas un troncon de chaine valide, le comportement est indetermine. Si l'allocation echoue, la fonction renvoie `NULL`.

##### ft_strjoin
> Alloue avec `malloc(3)` et retourne une chaine de caracteres "fraiche" terminee pas un `'\0'` resultant de la concatenation de `s1` et `s2`. Si l'allocation echoue, la fonction renvoie `NULL`.

##### ft_strtrim
> Alloue avec `malloc(3)` et retourne une copie de la chaine passee en parametre sans les espaces blancs au debut et a la fin de cette chaine. On considere comme des espaces blancs les caracteres `' '`, `'\n'` et `'\t'`. Si `s` ne contient pas d'espaces blancs au debut ou a la fin, la fonction renvoie une copie de `s`. Si l'allocation echoue, la fonction renvoie `NULL`.

##### ft_strsplit
> Alloue avec `malloc(3)` et retourne un tableau de chaines de caracteres "fraiches" (toutes terminees par un `'\0'`, le tableau egalement donc) resultant de la decoupe de `s` selon le caractere `c`. Si l'allocation echoue, la fonction retourne `NULL`.

##### ft_itoa
> Alloue avec `malloc(3)` et retourne une chaine de caracteres "fraiche" terminee par un `'\0'` representatnt l'entier `n` passe en parametre. Les nombres negatifs sont geres. Si l'allocation echoue, la fonction renvoie `NULL`.

##### ft_putchar
> Affiche le caractere `c` sur la sortie standard.

##### ft_putstr
> Affiche la chaine `s` sur la sortir standard.

##### ft_putendl
> Affiche la chaine `s` sur la sortie standard suivi d'un `'\n'`.

##### ft_putnbr
> Affiche l'entier `n` sur la sortie standard.

##### ft_putchar_fd
> Ecrit le caractere `c` sur le descripteur de fichier `fd`.

##### ft_putstr_fd
> Ecrit la chaine `s` sur le descripteur de fichier `fd`.

##### ft_putendl_fd
> Ecrit la chaine `s` sur le descripteur de fichier `fd` suivi d'un `'\n'`.

##### ft_putnbr_fd
> Ecrit l'entier `n` sur le descripteur de fichier `fd`.

#### Partie bonus
##### ft_lstnew
> Alloue avec `malloc(3)` et retourne un maillon “frais”. Les champs `content` et `content_size` du nouveau maillon sont initialises par copie des parametres de la fonction. Si le parametre `content` est nul, le champs `content` est initialise a `NULL` et le champs `content_size` est initialise a 0 quelque soit la valeur du parametre `content_size`. Le champ `next` est initialise a `NULL`. Si l’allocation echoue, la fonction renvoie `NULL`.

##### ft_lstdelone
> Prend en parametre l’adresse d’un pointeur sur un maillon et libere la memoire du contenu de ce maillon avec la fonction `del` passee en parametre puis libere la memoire du maillon en lui meme avec `free(3)`. La memoire du champ `next` ne doit en aucun cas être liberee. Pour terminer, le pointeur sur le maillon maintenant libere doit etre mis a `NULL` (de maniere similaire à la fonction ft_memdel).

##### ft_lstdel
> Prend en parametre l’adresse d’un pointeur sur un maillon et libere la memoire de ce
maillon et celle de tous ses successeurs l’un apres l’autre avec `del` et `free(3)`. Pour terminer, le pointeur sur le premier maillon maintenant libere doit etre mis à `NULL` (de maniere similaire à la fonction ft_memdel).

##### ft_lstadd
> Ajoute l'element `new` en tete de la liste.

##### ft_lstiter
> Parcourt la liste `lst` en appliquant a chaque maillon la fonction `f`.

##### ft_lstmap
> Parcourt la liste lst en appliquant à chaque maillon la fonction f et cree une nouvelle liste “fraiche” avec `malloc(3)` resultant des applications successives. Si une allocation echoue, la fonction renvoie `NULL`.

#### Partie bonus

### How does it work?

The goal is to create a library called libft.a from the source files so I can later use that library from other projects at 42.

To create that library, after downloading/cloning this project, **cd** into the project, copy all the files from the sub folders to the root directory and finally, call make:

	git clone https://github.com/Makgora/libft.git
	cd libft
	make

You should see a *libft.a* file and some object files (.o).


Now to clean up (removing the .o files), call `make clean`

### How do I use the library?

If you want to compile **example.c**, which is using the function **ft_putstr** : 

`gcc example.c -L. -lft`

-L takes the path to your library. `.` in this case<br>
-l takes the name of your library. This is the set of characters that come after `lib` in your library name.

That's it. Now run it using `./a.out`

## Example usage

This is a list of my projects that use Libft extensively:

* [get_next_line](https://github.com/Makgora/get_next_line)

Thx to [R4meau][4] and [moannuo][5] for this Readme.

[0]: https://github.com/Makgora/libft/blob/master/libft.fr.pdf "Libft PDF 'fr'"
[1]: https://github.com/Makgora/libft/blob/master/libft.en.pdf "Libft PDF 'en'"
[2]: http://www.42.fr/ "42 FR"
[3]: https://github.com/Makgora/libft/wiki
[4]: https://github.com/R4meau
[5]: https://github.com/moannuo 
