#include<stdio.h>   //출력을 위한 사용 선언.

/* sizeof : 길이를 재어주는게 아닌, 각 자료형마다 할당 된 메모리 크기를 바이트로 바꿔 나타내주는것.*/
void main(){        //메인함수 시작
    printf("char 자료형 크기 : %d byte byte\n",sizeof(char));
    //char 형태의 할당 된 메모리 사이즈를 바이트로 나타내라.
    printf("signed char 자료형 크기 : %d byte\n",sizeof(signed char));
    //음수 -128 ~ 양수 127까지만 표시되는 문자 형태에 할당 된 메모리값을 바이트로 바꿔 나타내라.
    printf("unsigned char 자료형 크기 : %d byte\n",sizeof(unsigned char));
    //양수만 표시되는 문자 형태에 할당 된 메모리값을 바이트로 바꿔 나타내라.
    printf("short 자료형 크기 : %d byte\n",sizeof(short));
    //정수 중 가장 작은 형태(short)에 할당 된 메모리 값을 바이트로 바꿔 나타내라.
    printf("short int 자료형 크기 : %d byte\n",sizeof(short int));
    //위의 short과 같은 뜻이다. short = 정수 중 가장 짧은 형태, int=정수형
    printf("signed short 자료형 크기 : %d byte\n",sizeof(signed short));
    //양수, 음수를 표시할수 있는, 가장 짧은 형태에 할당된 메모리 값을 바이트로 바꿔 나타내라.
    printf("signed short int 자료형 크기 : %d byte\n",sizeof(signed short int));
    //위와 같은 뜻이다. signed = 양수 음수 사용가능, short = 정수 중 가장 짧은 형태, int=정수형
    printf("unsigned short 자료형 크기 : %d byte\n",sizeof(unsigned short));
    //정수 중 양수만 표현가능한 가장 짧은 형태에 할당 된 메모리 값을 바이트로 바꿔 나타내라.
    printf("unsigned short int 자료형 크기 : %d byte\n",sizeof(unsigned short int));
    //위와 같은 뜻이며, unsigned는 부호를 사용할 수 없어 양수만 표현 가능하다.
    printf("int 자료형 크기 : %d byte\n",sizeof(int));
    //최소한 short보다 큰 크기를 가지고 있는 정수형태의 자료형의 할당 된 메모리 크기를 바이트로 출력하라.
    printf("signed int 자료형 크기 : %d byte\n",sizeof(signed int));
    //음수, 양수 둘 다 표현 가능한, 최소 short보다 큰 정수 자료형에 할당된 메모리 크기를 바이트로 출력하라.
    printf("unsigned 자료형 크기 : %d byte\n",sizeof(unsigned));
    //부호 표현을 못하여, 0을 포함한 양수만 표현가능한 자료형태의 할당 된 메모리 크기를 바이트로 출력하라.
    printf("unsigned int 자료형 크기 : %d byte\n",sizeof(unsigned int));
    //정수 중, 양수만 표현 가능한 최소 short보다 큰 정수 자료형에 할당 된 메모리 크기를 바이트로 출력하라.
    printf("long 자료형 크기 : %d byte\n",sizeof(long));
    //int로 담지 못하는 긴 자릿수의 정수형에 할당 된 메모리 크기를 바이트로 출력하라.
    printf("long int 자료형 크기 : %d byte\n",sizeof(long int));
    //위와 같은 뜻이다. long = int도 담지 못하는 긴 정수 형태. 해당 자료형의 할당 된 메모리 크기를 바이트로 출력하라.
    printf("signed long 자료형 크기 : %d byte\n",sizeof(signed long));
    //긴 형태의 정수 중, 음수와 양수 둘 다 표현 가능한 자료형태에 할당 된 메모리 크기를 바이트로 출력하라.
    printf("signed long int 자료형 크기 : %d byte\n",sizeof(signed long int));
    //위와 같은 뜻이다. 음수와 양수 둘 다 표현가능한 긴 정수형의 자료형태에 할당된 메모리 크기를 바이트로 출력하라.
    printf("unsigned long 자료형 크기 : %d byte\n",sizeof(unsigned long));
    //긴 정수 중 양수만 표현 가능 한 자료형에 할당 된 메모리 크기를 바이트로 출력하라.
    printf("unsigned long int 자료형 크기 : %d byte\n",sizeof(unsigned long int));
    //위와 같은 뜻, 긴 정수 중 양수만 표현 가능한 형태의 자료형에 할당 된 메모리 크기를 바이트로 출력하라는 뜻이다.
    printf("long long 자료형 크기 : %d byte\n",sizeof(long long));
    //long에도 다 담지 못할, 길고 긴 정수형에 할당 된 메모리 크기를 바이트로 출력하라.
    printf("long long int 자료형 크기 : %d byte\n",sizeof(long long int));
    //위와 같은 뜻이다. long long = 길고 긴 정수형, int = 정수형.
    printf("signed long long 자료형 크기 : %d byte\n",sizeof(signed long long));
    //양수, 음수 둘 다 표현 가능 한 길고 긴 정수형에 할당 된 메모리 크기를 바이트로 바꿔 출력하라.
    printf("signed long long int 자료형 크기 : %d byte\n",sizeof(signed long long int));
    //위와 같은 뜻, signed = 음수,양수 둘 다 표현가능,long long = long 이상의 범위, int = 정수형.
    printf("unsigned long long 자료형 크기 : %d byte\n",sizeof(unsigned long long));
    //길고 긴 정수형태 중, 양수만 표현가능한 자료형에 할당 된 메모리 크기를 바이트로 바꿔 출력하라.
    printf("unsigned long long int 자료형 크기 : %d byte\n",sizeof(unsigned long long int));
    //위와 같은 뜻, 길고 긴 정수형 중 양수만 표현가능한 자료형에 할당된 메모리 크기를 바이트로 바꿔 출력하라.
    printf("float 자료형 크기 : %d byte\n",sizeof(float));
    //소수점 이하 7자리까지 표현 가능한 실수형태의 자료형에 할당 된 메모리 크기를 바이트로 바꿔 출력하라.
    printf("double 자료형 크기 : %d byte\n",sizeof(double));
    //소수점 8자리 이상, 15자리 이하까지 표현 가능한 실수형태의 자료형에 할당된 메모리 크기를 바이트로 바꿔 출력하라.
    printf("long double 자료형 크기 : %d byte\n",sizeof(long double));
    //double보다 크기가 큰 실수 형태의 자료형에 할당 된 메모리 크기를 바이트로 바꿔 출력하라.
}                   //메인함수의 끝