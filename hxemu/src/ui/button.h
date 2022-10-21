#ifdef FRONTEND_SDL2

#ifndef HXEMU_UI_BUTTON_H
#define HXEMU_UI_BUTTON_H

#include <functional>
#include <string>

#include "widget.h"

#include "../colors.h"

class CButton : public CWidget {
	public:
		CButton(std::string c, int x, int y, int w, int h);
		CButton(std::string c, int x, int y, int w, int h, uint8_t r, uint8_t g, uint8_t b);
		~CButton();

		virtual bool update();
		virtual void draw(SDL_Surface *dest);

		virtual void mousedown(int x, int y);
		virtual void mouseup(int x, int y);

		void set_caption(const char *new_caption);
		void set_click_callback(std::function<void(CButton*, int, int)> callback);

	protected:
		void init(int x, int y, int w, int h, RgbColor &rgb);

		char *caption;
		bool updated;

		std::function<void(CButton*, int, int)> cb_click;
		uint32_t button_color;
		uint32_t button_color_lit;
		uint32_t button_color_dim;
};

#endif
#endif
