#include <stdio.h>

void main() {
	printf( "Hello world\n" );
	printf( "Answer %d\n", 42 );
	printf( "Name %s\n", "Sarah" );
	printf( "x %.1f i %d\n", 2.5, 100 );
}

int usf_to_euf() {
	int usf, euf;
	printf( "Enter US Floor\n" );
	scanf( "%d", &usf );
	euf = usf - 1;
	printf( "European Floor %d\n", euf );
}

int string_input() {
	char name[100];
	printf( "Enter name\n" );

	/* Name doesn't need the & because it's a char array. So when you don't
	add an index, you're already passing the reference to the beginning of the
	array. */
	scanf( "%100s", name );
	printf( "Hello %s\n", name );
}

int line_input() {
	char line [1000];
	printf( "Enter line\n" );
	scanf( "%[^\n]1000s", line );
	printf( "Line %s\n", line );
}

int line_input_safe() {
	char line [1000];
	printf( "Enter line\n" );

	/* In C there are three basic files, stdin, stdout and stderr. */
	fgets( line, 1000, stdin );
	printf( "Line %s\n", line );
}

int read_a_file() {
	char line[1000];
	FILE *hand;
	hand = fopen( "romeo.txt", "r" );

	/* fgets returns NULL when it reaches EOF */
	while ( fgets( line, 1000, hand ) != NULL ) {
		printf( "%s", line );
	}
}

int counted_loop() {
	int i;
	for ( i = 0; i < 10; i++ ) {
		printf( "%d\n", i );
	}
}

int max_min() {
	int first = 1;
	int val, maxval, minval;

	while ( scanf( "%d", &val ) != EOF ) {
		if ( first || val > maxval ) maxval = val;
		if ( first || val < minval ) minval = val;
		first = 0;
	}

	printf( "Maximum %d\n", maxval );
	printf( "Minimum %d\n", minval );
}

int guessing() {
	int guess;
	while ( scanf( "%d", &guess ) != EOF ) {
		if ( guess == 42 ) {
			printf( "Correct\n" );
			break;
		} else {
			printf( "Incorrect\n" );
		}
	}
}
