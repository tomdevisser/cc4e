#include <stdio.h>

void fahrenheit_celsius() {
	int lower, upper, step;
	float fahr, celsius;

	lower = 0; /* lower limit of temperature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	fahr = lower;

	while ( fahr <= upper ) {
		celsius = ( 5.0 / 9.0 ) * ( fahr - 32.0 );
		printf( "%3.0f %6.1f\n", fahr, celsius );
		fahr = fahr + step;
	}
}

void reverse(t)
char t[];
{
	int i, j, c;

	for ( i = 0, j = strlen(t)-1; i < j; i++, j-- ) {
		c = t[i];
		t[i] = t[j];
		t[j] = c;
	}
}

void fahr_cels() {
	#define LOWER 0 /* lower limit of temperature table */
	#define UPPER 300 /* upper limit */
	#define STEP 20 /* step size */

	int fahr;

	for ( fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP ) {
		printf( "%3d %6.1f\n", fahr, ( 5.0 / 9.0 ) * ( fahr - 32 ) );
	}
}

void input_to_output() {
	int c;

	c = getchar();
	while ( c != EOF ) {
		putchar( c );
		c = getchar();
	}
}

void count_chars() {
	long nc;

	nc = 0;
	while ( getchar() != EOF ) {
		++nc;
	}
	printf( "%ld\n", nc );
}

void count_lines() {
	int c, nl;

	nl = 0;
	while ( ( c = getchar() ) != EOF ) {
		if ( c == '\n' ) {
			++nl;
		}
	}
	printf( "%d\n", nl );
}

void count_words() {
	#define YES 1
	#define NO 0
	int c, nl, nw, nc, inword;

	inword = NO;
	nl = nw = nc = 0;
	while ( ( c = getchar() ) != EOF ) {
		++nc;
		if ( c == '\n' ) {
			++nl;
		}
		if ( c == ' ' || c == '\n' || c == '\t' ) {
			inword = NO;
		} else if ( inword == NO ) {
			inword = YES;
			++nw;
		}
	}
	printf( "%d %d %d\n", nl, nw, nc );
}

void counter() {
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for ( i = 0; i < 10; ++i ) {
		ndigit[i] = 0;
	}

	while ( ( c = getchar() ) != EOF ) {
		if ( c >= '0' && c <= '9' ) {
			++ndigit[c-'0'];
		} else if ( c == ' ' || c == '\n' || c == '\t' ) {
			++nwhite;
		} else {
			++nother;
		}
	}

	printf( "digits = " );
	for ( i = 0; i < 10; ++i ) {
		printf( " %d", ndigit[i] );
	}
	printf( ", white space = %d, other = %d\n", nwhite, nother );
}

int main() {
	// printf( "Hello, world\n" );
	fahr_cels();
	// input_to_output();
	// counter();
}
