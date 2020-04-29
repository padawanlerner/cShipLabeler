#include "..\inc\orderstruct.h"
int test()
{
    return 12;
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