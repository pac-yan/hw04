#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int maint(){
  char str1[] = "Good friends are always there for each other";
  printf("original string is: \"%s\"\n", str1);//should return "original string is: Good friends are always there for each other"
  char stopper = 'f';
  printf("after first occurence of \"%c\" is \"%s\"\n", stopper, strstr(str1, stopper));//should return "after first occurence of f is friends are always there for each other"
  char str2[] = "always";
  printf("after first occurence of \"%s\" is \"%s\"\n", str2, strstr(str1, str2));//should return "after first occurence of always is there for each other"
  char str3[] = "evil friends";
  printf("after first occurnece of \"%s\" is \"%s\"\n", str 3, strstr(str1, str3));//should return null
}
