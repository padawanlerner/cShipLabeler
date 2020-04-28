#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  /* code */
  // get order input
  // look up data in file
  // send data to ship label api
  // format data to label
  unsigned option;
  struct Order
  {
    char lookupID[20];
    char fullName[35];
  };
  
  char lookupField[20];

  option = 0;

  while (option < 4)
  {
    printf("Welcome to simple shipper.\n");
    printf("Options:\n\n");
    printf("1: Create a label from an order entered manually.\n");
    printf("2: Create a label from an order you lookup from a data source.\n");
    printf("3: Create a manifest from all for which labels have been created.\n");
    printf("4: Exit.\n\n");
    scanf("%d", &option);


    if (option != 4)
    {
      /* code */
      printf("lesgo");
    }
  }
  

  
  
  
  
  return 0;
}

// gcc main.c resource.c -o output
// cl main.c resource.c /link /output:output.exe
