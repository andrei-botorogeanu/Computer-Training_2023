#include <iostream>

int strlen(char str[]) {

    int i = 0;

	while( str[ i ] != '\0' ) {

		i++;
	}

	return i;
}


int main(int argc, char const *argv[])
{
	
	char sir[100] = "12345667890";

	std::cout<<sir<<"\n";

	int i = 0, n = strlen(sir);

	while( i < n ) {


        std::cout<<sir[ i ]<<" ";

        i++;
	}
	
	return 0;
}