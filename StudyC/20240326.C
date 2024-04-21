

/*\n 개행! 자바의 printnl과 같다. 
물론 자바에서도 /n 사용가능하고 같은 용도지만, 자바랑 c에서 내가 자주 쓰는 개행이 다르니 기록
*/


/*
포맷지정자 종류
*/

//%d: 정수를 출력합니다.
int number = 123;
printf("Number: %d\n", number);  // 출력 결과: Number: 123


//%f: 부동 소수점 수를 출력합니다.
float pi = 3.14159;
printf("Pi: %f\n", pi);  // 출력 결과: Pi: 3.141590


//%c: 문자를 출력합니다.
char letter = 'A';
printf("Letter: %c\n", letter);  // 출력 결과: Letter: A


//%s: 문자열을 출력합니다.
char name[] = "John";
printf("Name: %s\n", name);  // 출력 결과: Name: John


//%ld: long 형식의 정수를 출력합니다.
long bigNumber = 1234567890;
printf("Big number: %ld\n", bigNumber);  // 출력 결과: Big number: 1234567890


//%u: 부호 없는 정수를 출력합니다.
unsigned int unsignedNumber = 123;
printf("Unsigned number: %u\n", unsignedNumber);  // 출력 결과: Unsigned number: 123


//%x, %X: 16진수로 정수를 출력합니다.
int hexNumber = 255;
printf("Hexadecimal (lowercase): %x\n", hexNumber);  // 출력 결과: Hexadecimal (lowercase): ff
printf("Hexadecimal (uppercase): %X\n", hexNumber);  // 출력 결과: Hexadecimal (uppercase): FF


//%o: 8진수로 정수를 출력합니다.
int octNumber = 123;
printf("Octal number: %o\n", octNumber);  // 출력 결과: Octal number: 173


//%e, %E: 지수 형식으로 부동 소수점 수를 출력합니다.
float exponentNumber = 12345.6789;
printf("Exponential (lowercase): %e\n", exponentNumber);  // 출력 결과: Exponential (lowercase): 1.234568e+04
printf("Exponential (uppercase): %E\n", exponentNumber);  // 출력 결과: Exponential (uppercase): 1.234568E+04

//%g, %G: 부동 소수점 수를 자동으로 지수 형식 또는 일반 형식으로 출력합니다.
float floatNumber = 123.45;
printf("Float number (auto): %g\n", floatNumber);  // 출력 결과: Float number (auto): 123.45

//%%: % 기호를 출력합니다.
printf("Percentage: %%\n");  // 출력 결과: Percentage: %
