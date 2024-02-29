#include <stdio.h>
int main(int argc, char const *argv[])
{
	int vec[] = {1,2,3,4,5};

    int n = 5;

    //declaram un pointer catre intregi
    int *p;

    //p retine adresa primului element din vectorul vec
    p = &vec[0];


	printf("vec[0]=%d\n", vec[0]);
	printf("vec[1]=%d\n", vec[1]);
	printf("vec[2]=%d\n", vec[2]);
	printf("vec[3]=%d\n", vec[3]);
	printf("vec[4]=%d\n", vec[4]);

	printf("\n------\n");

	printf("vec[0]=%d\n", *(p+0));
	printf("vec[0]=%d\n", *(p+1)); //este echivalent cu a scrie p[1]
    printf("vec[0]=%d\n", *(p+2)); //p[2]
    printf("vec[0]=%d\n", *(p+3)); //p[3]
    printf("vec[0]=%d\n", *(p+4)); //p[4]

    printf("\n------\n");

	printf("vec[0]=%d\n", p[0]);
	printf("vec[0]=%d\n", p[1]);
    printf("vec[0]=%d\n", p[2]);
    printf("vec[0]=%d\n", p[3]);
    printf("vec[0]=%d\n", p[4]);
	return 0;
}
