#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define CHARSET "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[]{}|;:'\",.<>?/`~"

//o functie care genereaza o parola random de lungime specificata
void generatePassword(int length, char *password) {

     int i;
     int charsetLength = strlen(CHARSET);
     srand(time(NULL));
 
     for(int i = 0; i < length; ++i) {
       int index = rand() % charsetLength;
       password[ i ] = CHARSET[ index ];
    //*(password+i)
     }

     password[ length ] = '\0';
     //return password
}

int main(int argc, char const *argv[]) {

  //default password length
  int length = 14;

  if( strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0) {

     printf("Usage: %s [options]\n", argv[0]);
     printf("Options\n");
     printf(" -l, --length Length of the password(default: 14)\n");

  } else if(strcmp(argv[1], "-lungime") == 0 || strcmp(argv[1], "-l") == 0 || strcmp(argv[1], "--length") == 0) {

          if(argc > 2) {
              length = atoi(argv[2]);
          } else {
              printf("Error");
              return 1;
          }
  }  else {
     printf("Error: Invalid command-line argument");
     printf("Use: --help for usage\n");
  }

  char password[ length + 1];

  generatePassword( length, password );

  printf("Generated Password: %s\n", password);

  return 0;
}
