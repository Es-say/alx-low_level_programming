#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 * @parameter: describe the parameter
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char charType;
    int integerType;
    long int longintegerType;
    long long int longlongintegerType;
    float floatType;

    /*Sizeof operator is used to evaluate the size of a variable*/
    printf("Size of a char:%ld bytes\n",sizeof(charType));
    printf("Size of an int:%ld bytes\n",sizeof(integerType));
    printf("Size of a long int:%ld bytes\n",sizeof(longintegerType));
    printf("Size of a long long int:%ld bytes\n",sizeof(longlongintegerType));
    printf("Size of float:%ld bytes\n",sizeof(floatType));

    return (0);
}
