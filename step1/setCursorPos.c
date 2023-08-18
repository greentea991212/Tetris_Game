/*
���ϴ� ��ġ�� Ŀ���� ��ġ�� �̵���Ű�� ����
*/

#include <stdio.h>
#include <windows.h>

/*
COORD ����ü ���� - ����ũ�� ����Ʈ�� �����ϴ� API�̴�. �� ������ windows.h�� ���� ��������� include���־�� �Ѵ�.

typedef struct _COORD{

    int x;
    int y;

}COORD;
*/

int main(void)
{

    COORD pos1 = {0, 2}; // COORD type�ڷ����� ��� ����  x,y�� ���� 0,2�� �ʱ�ȭ
    COORD pos2 = {6, 6};
    COORD pos3 = {15, 4};

    /*�ܼ�ID�� �����ϴ� ������ �ڷ����� HANDLE�̸� ID�� �ҷ����� �Լ��� GetStdHandle�̴�.*/
    HANDLE consoleOut = GetStdHandle(STD_OUTPUT_HANDLE); // �ܼ��� ��¿� ���� ID�� ���ؼ� STD_OUTPUT_HANDLE�� �Ű������� �����Ѵ�.

    /*�ܼ��� ��ġ�� �����ϱ� ���ؼ��� SetConsoleCursorPosition �Լ��� ����Ѵ�. �̶� �Ű������� �ܼ� ID�� COORD �ڷ��� ����ü�� �Ѵ�.*/
    SetConsoleCursorPosition(consoleOut, pos1);
    printf("ù ��° �λ�: �ȳ��ϼ���.");

    SetConsoleCursorPosition(consoleOut, pos2);
    printf("�� ��° �λ�: �ȳ��ϼ���.");

    SetConsoleCursorPosition(consoleOut, pos3);
    printf("�� ��° �λ�: �ȳ��ϼ���.");

    return 0;
}