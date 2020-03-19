#include <stdio.h>

int main(int argc, char *argv[])
{
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "zed";
    char full_name[] = {
    'Z', 'e', 'd',
     ' ', 'A', '.', ' ',
    'S', 'h', 'a', 'w', '\0'
  };

   //WARNING: On some system you may have to change the
  //%ldn in this code to a %u since it will use unsigned ints

  printf("The size of an int: %ld\n", sizeof(int));
  printf("The size of areas (int[]): %ld\n",sizeof(areas));
  printf("The first area is %d, the 2nd %d.\n",areas[0],areas[1]);

  printf("The size of a char: %ld\n", sizeof(char));
  printf("The size of name (char[]): %ld\n", sizeof(name));
  printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));

  


 return (0);
}
