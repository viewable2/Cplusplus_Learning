#include <stdio.h>

int main() {
    
    int a;
    unsigned long int as;
    char asz;
    float asd;
    double asf;
	
    scanf("%d %ld %c %f %lf", &a, &as, &asz, &asd, &asf);
    
    printf("%d %ld %c %.03f %.09lf", a, as, asz, asd, asf);
    
    scanf("%d", &a);
    
    return 0;
}