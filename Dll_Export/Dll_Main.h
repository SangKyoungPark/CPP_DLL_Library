#pragma once

#ifdef CREATEDLL_EXPORTS
#define MYMATH_DECLSPEC __declspec(dllexport)
#else
#define MYMATH_DECLSPEC __declspec(dllimport)
#endif

/*
[__declspec(dllexport) | __declspec(dllimport)]
__declspec(dllexport) 키워드가 붙은 함수는 DLL 외부로 노출
즉, DLL을 사용하여 __declspec(dllexport) 키워드가 붙은 함수를 호출할 수 있다는 의미
__declspec(dllimport) 키워드는 DLL에 정의된 함수를 호출하기 위해 사용
__declspec(dllexport)로 정의된 함수를 __declspec(dllimport)로 호출

[extern "C" 키워드]
네임 맹글링이란, 컴파일러가 함수의 이름을 일정한 규칙을 가지고 변형하는 것을 의미
같은 이름의 함수가 여러 개 존재할 때 어떤 함수를 호출할지 구분해서 링크하기 위해 컴파일러가 이름을 변형 -> 맹글링 적용

*/

extern "C" MYMATH_DECLSPEC double Sum(double dData1, double dData2);
extern "C" MYMATH_DECLSPEC double Sub(double dData1, double dData2);
extern "C" MYMATH_DECLSPEC double Mul(double dData1, double dData2);
extern "C" MYMATH_DECLSPEC double Div(double dData1, double dData2);