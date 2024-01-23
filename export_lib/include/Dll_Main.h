#pragma once

#ifdef __cplusplus
extern "C" {
#endif

	__declspec(dllexport) char* HELLO(char* c);
	__declspec(dllexport) bool CHK(bool b);
	__declspec(dllexport) int SUM(int x, int y);
	__declspec(dllexport) double MUL(double x, double y);

#ifdef __cplusplus
}
#endif