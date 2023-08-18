/*
원하는 위치에 커서의 위치를 이동시키는 예제
*/

#include <stdio.h>
#include <windows.h>

/*
COORD 구조체 원형 - 마이크로 소프트가 제공하는 API이다. 이 때문에 windows.h에 대한 헤더파일을 include해주어야 한다.

typedef struct _COORD{

    int x;
    int y;

}COORD;
*/

int main(void)
{

    COORD pos1 = {0, 2}; // COORD type자료형의 멤버 변수  x,y를 각각 0,2로 초기화
    COORD pos2 = {6, 6};
    COORD pos3 = {15, 4};

    /*콘솔ID를 저장하는 변수의 자료형은 HANDLE이며 ID를 불러오는 함수는 GetStdHandle이다.*/
    HANDLE consoleOut = GetStdHandle(STD_OUTPUT_HANDLE); // 콘솔의 출력에 대한 ID를 위해서 STD_OUTPUT_HANDLE을 매개변수로 전달한다.

    /*콘솔의 위치를 변경하기 위해서는 SetConsoleCursorPosition 함수를 사용한다. 이때 매개변수는 콘솔 ID와 COORD 자료형 구조체로 한다.*/
    SetConsoleCursorPosition(consoleOut, pos1);
    printf("첫 번째 인사: 안녕하세요.");

    SetConsoleCursorPosition(consoleOut, pos2);
    printf("두 번째 인사: 안녕하세요.");

    SetConsoleCursorPosition(consoleOut, pos3);
    printf("세 번째 인사: 안녕하세요.");

    return 0;
}