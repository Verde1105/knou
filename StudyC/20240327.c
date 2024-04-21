#include<stdio.h>               //stdio.h 안에 많은 라이브러리가 있다. 개중엔 입력과 출력을 담당하는 라이브러리도 존재.
#pragma warning(disable:4996)   //경고해제문, 해당 페이지에서 스캔을 조용히 사용하기 위해 넣어줘야한다. 
/*마이크로 소프트에선 scanf(스캔)을 위험하다고 경고, scanf_s를 권장*/

int a, b, c;                    //숫자형을 담을 그릇 3개 a,b,c 제작
int product(int x, int y);      //숫자형 데이터 자리 2개 x,y를 가진, product함수 선언

void main(){                                                //메인 대괄호 시작
    printf("Enter a number between 1 and 100 : ");          //입력을 돕는 사용자 안내문1
    scanf("%d", &a);                                        //a 그릇에 첫번째 숫자(10진 정수형)를 입력받을것이다.
    printf("Enter another number between 1 and 100 : ");    //입력을 돕는 사용자 안내문2
    scanf("%d", &b);                                        //b 그릇이 두번째 숫자(10진 정수형)를 입력받을것이고
    c = product(a, b);
    /*product 함수의 int x 자리에 a값, int y 자리에 b값을 배정. 계산 된 product 함수의 결과를 c그릇에 담을것이다.*/
    /*데이터의 이동 순서는, 사용자에게 입력받은 a와 b 값이 위에서 선언 한 product 함수의 x,y 자리에 들어가고 
        메인함수 하단에 설명된 product함수의 내부기능을 거쳐 결과값이 이곳, c로 들어오는것.*/
    printf("%d * %d = %d \n", a, b, c);
    //순서대로 정수형표시, 곱하기, 정수형표시, 는, 정수형표시로 자리를 만든것, 각각의 정수형 표시 자리에 순서대로 a,b,c를 넣어라.
}   //주의. 여기가 메인 대괄호 끝
int product(int x, int y){  //5번째 줄에선 선언만 했고, 이곳에서 product함수의 내부 구조(x와 y가 어찌되는지) 설명. 
    return (x * y);         //x와 y가 곱해져 리턴.
}                           //주의. 메인 대괄호가 아닌, 함수 대괄호의 끝.