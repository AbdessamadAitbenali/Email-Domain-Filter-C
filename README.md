# Email Domain Filter en C

Petit projet en langage C que j'ai créé pour pratiquer les fichiers et les chaînes de caractères.

Le programme permet de lire une liste d'adresses email depuis un fichier texte et de garder seulement les emails qui correspondent au domaine choisi.

Par exemple, si je cherche :

```text
@gmail.com
```

le programme va garder seulement les adresses qui se terminent par `@gmail.com`.

## Comment ça fonctionne

Le fichier `emails.txt` contient plusieurs adresses email.

Exemple :

```text
abdessamad.aitbenali@gmail.com
abdessamad.aitbenali@yahoo.com
abdessamad.aitbenali@outlook.com
abdessamad.netsec@gmail.com
abdessamad.grs@proton.me
abdessamad.aitbenali@hotmail.com
abdessamad.cisco@gmail.com
abdessamad.python@outlook.com
```

Quand je lance le programme, il me demande le domaine que je veux chercher :

```text
Entrez le domaine que vous voulez chercher : @gmail.com
```

Le programme lit ensuite les emails un par un.

Si l'adresse se termine par `@gmail.com`, elle est ajoutée dans le fichier `found.txt`.

Résultat :

```text
abdessamad.aitbenali@gmail.com
abdessamad.netsec@gmail.com
abdessamad.cisco@gmail.com
```

Le programme affiche aussi le nombre d'emails trouvés :

```text
3 emails trouvés.
```

## Fichiers du projet

```text
Project C/
│
├── main.c
├── emails.txt
└── found.txt
```

- `main.c` contient le programme.
- `emails.txt` contient la liste des emails à analyser.
- `found.txt` contient les emails trouvés après le filtre.

## Notions utilisées

Avec ce petit projet, j'ai pratiqué plusieurs notions du langage C :

- les variables
- les conditions
- les boucles
- les chaînes de caractères
- `strlen()`
- `strcmp()`
- la lecture d'un fichier
- l'écriture dans un fichier
- `fopen()`
- `fscanf()`
- `fputs()`

## Compiler le programme

Avec GCC :

```bash
gcc main.c -o email_filter
```

Puis lancer :

```bash
./email_filter
```

Sous Windows :

```bash
email_filter.exe
```

## Ce que j'ai appris

Ce projet m'a surtout aidé à comprendre comment lire des données depuis un fichier puis écrire les résultats dans un autre fichier.

J'ai aussi utilisé `strlen()` et `strcmp()` pour vérifier si une adresse email se termine par le domaine entré par l'utilisateur.

C'est un petit projet, mais il m'a permis de pratiquer le C avec un exemple plus concret que les exercices simples.
