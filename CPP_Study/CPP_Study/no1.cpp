﻿#include <iostream>
using namespace std;

// 이렇게 주석을 달 수 있어요!
// Ctrl+K+C(Comment) Ctrl+K+U(UnComment) 단축키

/*
    주석이 여러 줄~
*/

// 프로그래밍을 단순하게 생각하면
// 적절한 데이터를 저장하고 가공하는 것
// 데이터 + 로직

// 그 중에서도 가장 빈번하게 사용되는 정수에 대해서 알아봅시다.

// 변수 선언 방법
// [타입] [이름];
// [타입] [이름] = [초기값];

// 0이 아닌 초기화 값이 있으면 .data 영역
int hp = 100;



// 초기값이 0이거나, 초기값이 없는 변수라면 .bss 영역
char a; // 1byte (-128 ~ 127)
short b; // 2byte (-32768 ~ 32767)
int c; // 4byte (-21.4억 ~ 21.4억)
__int64 d; // 8byte (long long) (큼.)

unsigned char ua; // 1byte (0 ~ 255)
unsigned short ub; // 2byte (0 ~ 65536)
unsigned int uc; // 4byte ( 0~ 42.9억)
unsigned __int64 ud; // 8byte (long long) 

// 참고) 이론적으로 양수만 존재할 수 있는 데이터 unsigned
// 무조건 unsigned를 사용할지 의견이 갈림
// - 레벨이 음수라는 것은 말이 안된다 -> 그럼 차라리 그 자리에서 프로그램을 크래시 내서 버그를 빨리 찾는게 좋다.
// - unsigned / signed 사이의 변환

// 귀찮은데 그냥 대충 4바이트로 가면 안될까?
// -> 콘솔/모바일 게임 -> 메모리가 늘 부족하다.
// -> 온라인 게임 -> 4바이트 + 1만명 (4만 바이트를 네트워크에 매초마다 -> 나비효과)

int main()
{
    // 정수 오버플로우
    b = 32767;
    b = b + 1;
    cout << b << endl;

    // 정수 언더플로우
    ub = 0;
    ub = ub - 1;
    cout << ub << endl;

    //cout << "체릭이 " << hp << " 남았습니다." << endl;
}

