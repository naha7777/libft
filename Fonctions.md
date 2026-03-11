# Fonctions :

## ISALPHA <ctype.h>
Teste si le caractère c est ne lettre alphabétique et renvoie != 0 si oui, 0 si non. (A-Z, a-z)

## ISDIGIT <ctype.h>
Teste si c'est un chiffre ('0' à '9')

## ISALNUM <ctype.h>
Teste si c'est alphanumérique (A-Z, a-z ou 0-9)

## ISASCII <ctype.h>
Teste si la valeur de c est un caractère ASCII valide. (0-127)

## ISPRINT <ctype.h>
Teste si un caractère est imprimable, c'est à dire visible à l'écran (espace inclus), (32-126).

## STRLEN <string.h> (String Lenght)
Renvoie la longueur d'une chaine (sans compter '\0').

## MEMSET <string.h> (Memory to set)
Remplie une zone mémoire de n octets avec la valeur donnée.\
Souvent utilisé pour initialiser une zone mémoire à 0.

## Bzero <strings.h> (Byte Zero)
Met n octet à 0 dans la mémoire pointée par ptr.\
Bzero n'est pas standard ISO C, on préfère memset.

## MEMCPY <string.h> (Memory Move)
Copier n octets depuis la zone mémoire src vers la zone mémoire dest.

## MEMMOVE <string.h> (Memory Move)
Copier n octets de src vers dset meme si les zones se chevauchent.\
+ sure que memcpy.

## STRLCPY <string.h> (String Lenght Copy)
Copier une chaine source dans dest en évitant les débordements. Elle retourne la longueur de src, pas le nb de caractères copiés.

## STRLCAT <string.h> (String Lenght Concatenate)
Caractère src á la fin de dest, sans dépasser size. Elle retourne la longueur totale que la chaine aurait eue si elle n'avait pas été tronquée.

## TOUPPER <ctype.h> (To Uppercase)
COnverti un caractère en majuscule ('a' -> 'A').

## TOLOWER <ctype.h> (To Lowercase)
Converti un caractère en minuscule.

## STRCHR <string.h> (String Character)
Cherche la 1ère occurrence du caractère dans la chaine str. Retourne un pointeur vers le caractère trouvé ou NULL si il n'est pas présent.

## STRRCHR <string.h> (String Reverse Character)
Cherche la dernière occurence du caractère c dans la chaine str.

## STRNCMP <string.h> (String Compare n)
Compare n caractères de 2 chaines S1 et S2 en fonction du code ASCII.
0 : S1 = S2 \
inférieur à 0 : S1 < S2 \
supérieur à 0 : S1 > S2

## MEMCHR <string.h> (Memory Character)
Cherche la 1ère occurence de l'octet c dans les n 1ers octets du bloc mémoire pointé par ptr.\
!= strchr car elle ne s'arrete pas sur '\0'.

## MEMCMP <string.h> (Memory Compare)
Compare les n 1ers octets de 2 blocs mémoire.\
0 si les 2 blocs sont identiques sur n octets\
inférieur à 0 si ptr1 est inferieur à ptr2\
supérieur à 0 sir ptr1 est supérieur à ptr2

## STRNSTR <string.h>
Chercher la 1`ere occurence de la sous-chaine little dans la chaine big, mais uniquement dans les len 1ers caractères de big.\
Retourne un pointeur vers le dt de la sous chaine trouvée.

## ATOI <stdlib.h> (ASCII to Integer)
Convertir une chaine de caractère en entier (int).\
Ignore les espaces, reconnait un signe puis lit les chiffres.

## CALLOC (Contiguous Allocation) <stdlib.h>
Alloue dynamiquement de la mémoire (malloc) pour un tableau de nmemb éléments de size octets chacun, et initialise tous les octets à 0.\
ex : calloc (5, sizeof(int)) -> alloue 5 entiers initialisés à 0.\
Utile pour :
- éviter des valeurs indéterminées après allocation,
- s'assurer que les valeurs d'un tableau commencent à 0,
- initialiser les pointeurs à NULL.\
Mettre les octets à 0 garantit un départ propre et prévisible.

## MALLOC <stdlib.h>
Alloue dynamiquement un bloc de mémoire de size octets.\
Toujours vérif que malloc != NULL et toujours free().

## STRDUP <string.h> (String Duplicate)
Créer une copie en mémoire dynamique d'une chaine de caractères.

## SUBSTR (Substring)
Créer une sous chaine allouée à partir de la chaine S, en commençant à l'indice start et en copiant au maximum len caractères.

## STRJOIN 
Concaténer 2 chaines (s1+s2) dans une nouvelle chaine allouée.

## STRTRIM 
Créer une nouvelle chaine allouée en supprimant les caractères prśents dans set au début et à la fin de s1.\
ex : set = "*" et s1 = "*bon*jour*" => "bon*jour".

## SPLIT 
Découper une chane s en tableau de sous-chaines allouées séparément, selon le séparateur c.

## ITOA (Integer to ASCII)
Converti un entier 9int0 en chaine de caractère.

## STRMAPI (String Map Indexed)
Créer une nouvelle chaine allouée oú chaque caractère de s est tranformé par la fonction f (unsigned int i, char c).

## STRITERI (String Iterate Indexed)
Appliquer lq fonction f à chaque caractère de la chaine s (unsigned int, char *).

STRMAPI -> crée une nouvelle chaine\
!=\
STRITERI -> modifie la chaine originale\

## PUTCHAR_FD 
Ecrire un seul caracère c sur un descripteur de fichier fd.

### Descripteurs standards :
entrée standard stdin 0\
sortie standard stdout 1\
erreur standard stderr 2\
ex : `ft_putchar_fd('A', 1);` = écris A sur la sortie standard.

## PUTSTR_FD 
Ecris une string sur le descripteur fd.

## PUTENDL_FD
Ecris une string et un saut de ligne sur le descripteur fd.

## PUTNBR_FD
Ecris un nombre entier n sous forme de texte sur le descripteur fd.

# Fonctions Bonus :

## LSTNEW
Crée un nouveau noeud.

## LSTADD_FRONT
Ajoute le nouveau noeud au début de la liste.

## LSTADD_BACK
Ajoute le nouveau noeud à la fin de la liste.

## LSTSIZE
Compte le nombre de noeuds dans la liste.

## LSTLAST
Return le dernier noeud de la liste.

## LSTDELONE
Free le contenu du noeud avec la fonction del puis free le noeud mais pas le suivant.

## LSTCLEAR
Supprime et free les noeuds en utilisant la fonction del.

## LSTITER
Appliquer la fonction f à toute la liste (au contenu de chaque noeud).

## LSTMAP 
Applique lq fonction f à chaque contenu des noeuds et les stocke dans une nouvelle liste. Si besoin, on utilise la fonction del.
