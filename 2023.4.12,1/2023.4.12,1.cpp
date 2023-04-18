// 2023.4.12,1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"

// 매개변수가 포인터를 가지고 있다면 주소값을 요구하는것!
int Add(int *a, int *b)
{
    //a += 10;
    //b -= 5;
    
    *a += 10;
    *b -= 5;

    return *a + *b;
}

int Add2(int a, int b)
{
    a += 10;
    b -= 5;

    return a + b;
}

/*
    포인터란?
    주소값을 가리키는 값
*/

void Suffle(int *arrData) // 포인터로 주소값을 받게될 경우
{
    int nSrc;
    int nDest;
    int nTemp;

    for (int i = 0; i < 100; i++)
    {
        nSrc = rand() % 10;
        nDest = rand() % 10;

        nTemp = arrData[nSrc];
        arrData[nSrc] = arrData[nDest];
        arrData[nDest] = nTemp;
    }
}

int main()
{
    srand(time(NULL));
    rand();

    int nA, nB, nC, nD;

    // int* pA = &nA; 포인터 지정
    int *pA = new int; // new 연산을 통해서 메모리에 공간을 할당
    // * 변수가 그 할당된 메모리 공간을 가르킴
    int *pB = new int;

    *pA = 10;
    *pB = 5;

    nA = 10;
    nB = 5;
    nC = Add(pA, pB);
    nD = Add2(nA, nB);

    //cout << nA << ", " << nB << endl;
    //cout << &nA << endl;
    cout << *pA << ", " << *pB << endl;
    cout << nC << endl;
    cout << nA << ", " << nB << endl;
    cout << nD << endl;

    // & : 메모리 주소값을 보여준다.


    delete pA;  // new를 사용하여 할당받은 메모리가 있다면 사용이 끝나고 delete를 사용해 해제해줘야한다
    // 안하면 메모리 누수 발생
    delete pB;

    //nArray는 배열이 할당된 첫번째 주소값을 가르킨다
    //nArray[0]은 가르키는 주소값 + 0
    //nArray[1]은 가르키는 주소값 + 1 (선언 변수의 크기에 따라서 달라진다)
    int nArray[10];

    for (int i = 0; i < 10; i++)
    {
        nArray[i] = i + 1;
    }

    Suffle(nArray);

    for (int i = 0; i < 10; i++)
    {
        cout << nArray[i] << endl;
    }

    system("pause");

    return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
