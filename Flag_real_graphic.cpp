#include <windows.h>
#include <iostream>
using namespace std;

int main()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	HWND hwnd = GetConsoleWindow();
	HDC hdc = GetDC(hwnd);

	system("title Real Graphics: Pen and Brush");
	system("mode con cols=150 lines=40");


	int width = 320;
	int height = width * 2;

	HPEN pen = CreatePen(PS_SOLID, 1, RGB(22, 155, 98));
	HBRUSH brush = CreateSolidBrush(RGB(22, 155, 98));

	SelectObject(hdc, pen);
	SelectObject(hdc, brush);

	Rectangle(hdc, 50, 50, 50 + width, 50 + height);

	DeleteObject(pen);
	DeleteObject(brush);

	////////////////////////////////////////////////////

	pen = CreatePen(PS_SOLID, 1, RGB(255, 255, 255));
	brush = CreateSolidBrush(RGB(255, 255, 255));

	SelectObject(hdc, pen);
	SelectObject(hdc, brush);

	Rectangle(hdc, 370, 50 , 370 + width, 50 + height);

	DeleteObject(pen);
	DeleteObject(brush);

	////////////////////////////////////////////////////

	pen = CreatePen(PS_SOLID, 1, RGB(255, 136, 62));
	brush = CreateSolidBrush(RGB(255, 136, 62));

	SelectObject(hdc, pen);
	SelectObject(hdc, brush);

	Rectangle(hdc, 690, 50, 690 + width, 50 + height);

	DeleteObject(pen);
	DeleteObject(brush);

	////////////////////////////////////////////////////

	CONSOLE_CURSOR_INFO cci;
	cci.bVisible = false;
	cci.dwSize = 100;
	SetConsoleCursorInfo(h, &cci);

	Sleep(INFINITE);
}