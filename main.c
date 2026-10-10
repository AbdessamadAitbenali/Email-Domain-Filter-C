#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *f, *f2;
    int i = 0;

    printf("Mettez la liste des emails dans le fichier 'emails.txt'\n");

    char name[30];
    printf("Entrez le domaine que vous voulez chercher : ");
    scanf("%29s", name);

    char found[100];

    f = fopen("emails.txt", "r");
    f2 = fopen("found.txt", "w");

    if (f == NULL || f2 == NULL) {
        printf("Erreur pour ouvrir le fichier.\n");
        return 1;
    }

    while (fscanf(f, "%99s", found) == 1) {

        int lenFound = strlen(found);
        int lenName = strlen(name);

        if (lenFound >= lenName &&
            strcmp(found + lenFound - lenName, name) == 0) {

            fputs(found, f2);
            fputs("\n", f2);
            i++;
        }
    }

    printf("%d emails trouves.\n", i);

    fclose(f);
    fclose(f2);

    return 0;
}
