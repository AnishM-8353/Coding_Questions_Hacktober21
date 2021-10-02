#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

/*
 * To return the string from the function, you should either do static allocation or dynamic allocation
 *
 * For example,
 * char* return_string_using_static_allocation() {
 *     static char s[] = "static allocation of string";
 *
 *     return s;
 * }
 *
 * char* return_string_using_dynamic_allocation() {
 *     char* s = malloc(100 * sizeof(char));
 *
 *     s = "dynamic allocation of string";
 *
 *     return s;
 * }
 *
 */
char* timeConversion(char* s) {

  char* s2;
  int n=strlen(s),i;
  s2=(char*)malloc(n*sizeof(char));
  //static char s2[10];
  if(s[n-2]=='P' || s[n-2]=='p'){

    if(s[0]=='0'){
    
      switch(s[1])
      {
       case '1': s2[0]='1';
                  s2[1]='3';
                  break;
        case '2': s2[0]='1';
                  s2[1]='4';
                  break;
        case '3': s2[0]='1';
                  s2[1]='5';
                  break;
        case '4': s2[0]='1';
                  s2[1]='6';
                  break;
        case '5': s2[0]='1';
                  s2[1]='7';
                  break;
        case '6': s2[0]='1';
                  s2[1]='8';
                  break;
        case '7': s2[0]='1';
                  s2[1]='9';
                  break;
        case '8': s2[0]='2';
                  s2[1]='0';
                  break;
        case '9': s2[0]='2';
                  s2[1]='1';
                  break;
        }
      }
    }
  

      if(s[0]=='1')
      {
        switch(s[1])
        {
           case '0': s2[0]='2';
                    s2[1]='2';
                    break;
          case '1': s2[0]='2';
                    s2[1]='3';
                    break;
          case '2': s2[0]='1';
                    //printf("%c",s[0]);
                    //printf("%c",s[1]);
                    s2[1]='2';
                    //printf("%c",s[0]);
                    //printf("%c",s[1]);
                    break;
        }
      }
  
    




  if(s[n-2]=='A' || s[n-2]=='a' )
  {
    if(s[0]=='1' && s[1]=='2')
    {
       s2[0]='0';
       s2[1]='0';
    }
    else
    {
      for(i=0;i<n-2;i++)
      {
        s2[i]=s[i];
      }
    }
    
    /*if(s[0]=='1' && s[1]=='2' && s[3]=='0' && s[4]=='0' && s[6]=='0' && s[7]=='0')
    {
      s[0]=='0';
      s[1]=='0';
      s[3]=='0';
      s[4]=='0';
      s[6]=='0';
      s[7]=='0';
      
    }*/
  
  }

  for(i=2;i<n-2;i++)
  {
    s2[i]=s[i];
  }
  //s2[n-2]='\0';

  return s2;
  }



int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s = readline();

    char* result = timeConversion(s);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}
