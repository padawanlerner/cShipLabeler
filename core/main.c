#include <stdio.h>
#include <string.h>
#include "..\orderlookup\inc\orderstruct.h"
#include "..\orderlookup\inc\orderlookup.h"

int main(int argc, char const *argv[])
{
  /* code */
  // get order input
  // look up data in file
  // send data to ship label api
  // format data to label
  unsigned option;

  option = 0;

  printf("Welcome to simple shipper.\n");
  while (option < 4)
  {

    if (!option)
    {
      printf("Options:\n\n");
      printf("1: Create a label from an order entered manually.\n");
      printf("2: Create a label from an order you lookup from a data source.\n");
      printf("3: Create a manifest from all for which labels have been created.\n");
      printf("4: Exit.\n\n");
      scanf("%d", &option);
    }
    

    if (option < 4 && option > 0)
    {
      if (option < 3 && option > 0)
      {
        printf("Let's create a label.\n");

        struct Order orderToLabel;
        char lookupField[20];

        printf("Option %d selected. Enter order ID, or enter quit to go back to the main menu.\n", option);
        scanf("%s", lookupField);

        if (!strcmp(lookupField, "quit"))
        {
          printf("returning to main menu");
          option = 0;
        }
        

        if (option == 1)
        {
          printf("Enter the order manually.\n");
          orderToLabel = enterOrder(lookupField);
        }
        else if (option == 2)
        {
          printf("Look up the order.\n");
          orderToLabel = lookupOrder(lookupField);
        }

        if (orderToLabel.orderOK && option < 3 && option > 0)
        {
          // prompt if order looks good
          printf("order is good!\n\n");
          // edit order (how?)
          // send the data to the postal api

        }
        else
        {
          // something went wrong
          printf("Something is wrong with this order.\n");
        }

        printf("Order: %s.\n", orderToLabel.lookupID);
        printf("name: %s.\n", orderToLabel.fullName);
      }
    }
  }

  return 0;
}

// gcc main.c resource.c -o output
// cl main.c resource.c /link /output:output.exe
