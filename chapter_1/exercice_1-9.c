#include <stdio.h>

int main () {
	int c;
	int prevc;				//prevc = previous caractere

	while ((c = getchar()) != EOF) {
		if (c != ' ')
			putchar(c);
		if (c == ' ' && prevc != ' ')	// if c is a blank and previous caractere not, print it , if prevc is a blank, there is more than one blank, don'tprint it .
			putchar(c);
		prevc = c;
	}
}
