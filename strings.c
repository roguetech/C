#include <stdio.h>
#include <string.h>

void myStrings(void) {
  char src[] = "Hello i am a test";
  char dest[20];

  strncpy(dest, src, sizeof(src) -1);

  printf("My String is: %s\n", dest);
}

void myConCat(void) {
  char src[50], dest[50];

  strcpy(src, "This is source");
  strcpy(dest, "This is the destination");

  strncat(dest, src, 15);

  printf("Final destination string:|%s|\n", dest);
}

void myPointer(void) {
  int Number = 25;
  int *pNumber = &Number;

  printf("Pointer Address is %p\n.", &pNumber);
}

int main(void)
{
  //myStrings();
  //myConCat();
  myPointer();

  return 0;
}
