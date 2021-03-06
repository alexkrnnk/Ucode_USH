#include "../inc/libmx.h"

void mx_str_reverse(char *s) {
   if (s == NULL) {
        return;
   }
   
   int length, c;
   char *begin, *end, temp;
 
   length = 0;

   for(int i = 0; s[i] != '\0'; i++) {
      length++;
   }

   begin = s;
   end = s;
 
   for (c = 0; c < length - 1; c++) {
      end++;
   }
 
   for (c = 0; c < length/2; c++) {        
      temp = *end;
      *end = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }
}

