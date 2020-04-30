#include "../inc/orderstruct.h"
#include <stdio.h>
#include <string.h>
int test()
{
    return 12;
}

// this function takes an an array of 20 character (or less) strings
void test2(char arrayOfStrings[][20], unsigned sizeOfArray){
    for (unsigned i = 0; i < sizeOfArray; i++)
    {
        /* code */
        strncpy(arrayOfStrings[i], "gahhhhhhhhhhhh!",19);
    }
    
}

struct Order lookupOrder(char *lookup)
{
    struct Order resultOrd;

    strcpy(resultOrd.lookupID, lookup);
    strcpy(resultOrd.fullName, "adam lerner");

    resultOrd.orderOK = 1;
    return resultOrd;
}

struct Order enterOrder(char *lookup)
{
    struct Order resultOrd;
    strcpy(resultOrd.lookupID, lookup);

    printf("Enter name: ");
    scanf("%s", resultOrd.fullName);

    resultOrd.orderOK = 1;
    return resultOrd;

}