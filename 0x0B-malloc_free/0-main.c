#include "main.h"
2#include <stdio.h>
3#include <stdlib.h>
4
5/**
6 * simple_print_buffer - prints buffer in hexa
7 * @buffer: the address of memory to print
8 * @size: the size of the memory to print
9 *
10 * Return: Nothing.
11 */
12void simple_print_buffer(char *buffer, unsigned int size)
13{
14    unsigned int i;
15
16    i = 0;
17    while (i < size)
18    {
19        if (i % 10)
20        {
21            printf(" ");
22        }
23        if (!(i % 10) && i)
24        {
25            printf("\n");
26        }
27        printf("0x%02x", buffer[i]);
28        i++;
29    }
30    printf("\n");
31}
32
33/**
34 * main - check the code for ALX School students.
35 *
36 * Return: Always 0.
37 */
38int main(void)
39{
40    char *buffer;
41
42    buffer = create_array(98, 'H');
43    if  (buffer == NULL)
44    {
45        printf("failed to allocate memory\n");
46        return (1);
47    }
48    simple_print_buffer(buffer, 98);
49    free(buffer);
50    return (0);
51}
52
