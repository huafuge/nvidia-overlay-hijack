#define _CRT_SECURE_NO_WARNINGS

#ifndef FOverlay_H
#define FOverlay_H

#include <windows.h>
#include <stdio.h>
#include <dwmapi.h> 
#include <d2d1.h>
#include <dwrite.h>
#pragma comment(lib, "Dwrite")

#pragma comment(lib, "Dwmapi.lib") 
#pragma comment(lib, "d2d1.lib")


#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS

class FOverlay
{
public:
	auto window_set_style()-> void;
	auto window_set_transparency()-> void;
	auto window_set_top_most()-> void;
	auto retrieve_window()->HWND;
	auto window_init()->BOOL;
	auto d2d_shutdown()-> void;
	auto init_d2d()->BOOL;
	auto begin_scene()-> void;
	auto end_scene()-> void;
	auto clear_scene()-> void;
	auto draw_text_white(int x, int y, const char* str, ...)-> void;
	auto draw_text_red(int x, int y, const char* str, ...)-> void;
	auto draw_text_green(int x, int y, const char* str, ...)-> void;
	auto clear_screen()-> void;

};

#endif