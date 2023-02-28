/*#include <stdio.h>
#include <string.h>
int choice;

int menu1()
{
    FILE *f_ptr;
    f_ptr = fopen("test1","r");
    char f_print[500];
    fgets(f_print,500,f_ptr);
    printf("%s",f_print);
    fclose(f_ptr);
    
}
int main()
{
    FILE *f_ptr;
    f_ptr = fopen("test1","w");
    fclose(f_ptr);
    menu1();
    return 0;
}*/
/*#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char line[1024];
  char *token;
  FILE *file;

  if (argc != 2) {
    printf("Usage: %s <filename>\n", argv[0]);
    return 1;
  }

  file = fopen(argv[1], "r");
  if (!file) {
    printf("Failed to open file '%s'\n", argv[1]);
    return 1;
  }

  while (fgets(line, 1024, file)) {
    token = strtok(line, ",");
    while (token) {
      printf("%-15s", token);
      token = strtok(NULL, ",");
    }
    printf("\n");
  }

  fclose(file);
  return 0;
}*/
#include <stdio.h>
#include <string.h>

int fun(int argc, char *argv[]) {
  char line[1024];
  char *token;
  FILE *file;

  //if (argc != 2) {
    //printf("Usage: %s <filename>\n", argv[0]);
    //return 1;
  //}

  file = fopen(argv[1], "r");
  if (!file) {
    printf("Failed to open file '%s'\n", argv[1]);
    return 1;
  }

  while (fgets(line, 1024, file)) {
    token = strtok(line, ",");
    while (token) {
      printf("%-15s", token);
      token = strtok(NULL, ",");
    }
    printf("\n");
  }

  fclose(file);
  return 0;
}
int main(){
    int filenamegc;
    char *filename[50];
    fun(filenamegc,*filename[50]);
    return 0;
}

