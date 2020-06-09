#include "main.h"

static void render(FOverlay* overlay)
{
	while (TRUE)
	{
		overlay->begin_scene();

		overlay->clear_scene();

		overlay->draw_text_white(10, 10, "Nvidia overlay hijacker made by raizo#0001");


		overlay->end_scene();

		return;
	}
}

static void _init(FOverlay* overlay)
{
	// Initialize the window
	if (!overlay->window_init())
		return;

	// D2D Failed to initialize?
	if (!overlay->init_d2d())
		return;

	// render loop
	std::thread r(render, overlay);


	r.join(); // threading



	overlay->d2d_shutdown();

	return;
}

int main()
{
	FOverlay* overlay = { 0 };
	_init(overlay);

	std::cin.get();
}