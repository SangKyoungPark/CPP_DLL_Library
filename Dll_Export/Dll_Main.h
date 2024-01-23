#pragma once

#ifdef CREATEDLL_EXPORTS
#define MYMATH_DECLSPEC __declspec(dllexport)
#else
#define MYMATH_DECLSPEC __declspec(dllimport)
#endif

/*
[__declspec(dllexport) | __declspec(dllimport)]
__declspec(dllexport) Ű���尡 ���� �Լ��� DLL �ܺη� ����
��, DLL�� ����Ͽ� __declspec(dllexport) Ű���尡 ���� �Լ��� ȣ���� �� �ִٴ� �ǹ�
__declspec(dllimport) Ű����� DLL�� ���ǵ� �Լ��� ȣ���ϱ� ���� ���
__declspec(dllexport)�� ���ǵ� �Լ��� __declspec(dllimport)�� ȣ��

[extern "C" Ű����]
���� �ͱ۸��̶�, �����Ϸ��� �Լ��� �̸��� ������ ��Ģ�� ������ �����ϴ� ���� �ǹ�
���� �̸��� �Լ��� ���� �� ������ �� � �Լ��� ȣ������ �����ؼ� ��ũ�ϱ� ���� �����Ϸ��� �̸��� ���� -> �ͱ۸� ����

*/

extern "C" MYMATH_DECLSPEC double Sum(double a, double b);
extern "C" MYMATH_DECLSPEC double Sub(double a, double b);
extern "C" MYMATH_DECLSPEC double Mul(double a, double b);
extern "C" MYMATH_DECLSPEC double Div(double a, double b);