#include <stdio.h>
#include <stdlib.h>

/* int main(int argc, char **argv) */
/* { */
/*     int num = 0; */
/*     if ( ( argc < 2 ) || ( ( num = atoi ( argv[1] ) ) <= 0 ) ) */
/*     num = 10; */

/*     int sum = 0; */

/*     for ( int i = 3; i < num; i++ ) { */
/*       if ( i % 3 == 0 || i % 5 == 0 ) sum += i; */
/*     } */
/*     printf("Sum = %d\n", sum); */

/*     return 0; */
/* } */

int main(int argc, char **argv) {
    int num = 0;
    int sum = 0;
    if ( ( argc < 2 ) || ( ( num = atoi ( argv[1] ) ) <= 0 ) ) {
      num = 10;
    }

    for ( int i = 3; i < num; i += 3 ) sum += i;
    for ( int i = 5; i < num; i += 5 ) {
        if ( i % 3 != 0 ) sum += i;
    }

    printf("Sum = %d\n", sum);
    return 0;
}
