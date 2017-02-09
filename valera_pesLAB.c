#include <stdlib.h>
#include <stdio.h>
#define maxL 255
typedef struct  {
int valera_pidr;
char valera_hyu[maxL];
float huita;}valera_pes;

int main (int argc, const char * argv[]) {
FILE *file;


//char fn[maxL];

valera_pes *valera_psina = malloc(sizeof(valera_pes));
if (argc != 2)
{
        printf("kek\n");
        return 0;
    }
    if ((file = fopen(argv[1], "r+b")) == NULL)
   {
        printf("kek\n");
        return 0;
   }
int i=0;
   while(!feof(file))
{
    fread(valera_psina ,sizeof(valera_pes),1,file);
    printf("%d %s %f" , valera_psina ->valera_pidr, valera_psina ->valera_hyu, valera_psina->huita);
    i++;
}





fseek(file, 0, SEEK_END);
    printf("Elements count: %d\n", i );
    printf("File size: %ld bytes", ftell(file));
    fclose(file);

return 0;
}
