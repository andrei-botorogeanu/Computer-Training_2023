#include <iostream>
#include <cstring>

typedef struct Om {
	 char culoare[10];
	 int greutate;
	 int inaltime;
} Om;


//aici lucram cu OOP programare orientata pe obiect
class Human {
      
     public:
     char culoare[10];
     int greutate;
     float inaltime;

	 Human(char c[10], int greutate, float inaltime) {
               
	 }
};

int main(int argc, char const *argv[])
{
    Om gigi;
    char str[6] = "hello";
    char str2[10];
    int i = 0;
    while(str[i]!='\0') {
    	str2[i] = str[i];
    	i++;
    }    
    str2[i] = '\0';    
    std::cout<<str2;
    //str:  h e l l o \0
    //str2: h e l l o \0

    Human valentin("adsa",324,23.43);
	return 0;
}