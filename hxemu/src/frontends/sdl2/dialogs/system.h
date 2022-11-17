#ifdef FRONTEND_SDL2

#ifndef HXEMU_FRONTENDS_SDL2_DIALOGS_SYSTEM
#define HXEMU_FRONTENDS_SDL2_DIALOGS_SYSTEM

#include <functional>

#include "config_dialog.h"

class SystemDialog : public ConfigDialog {
	public:
		SystemDialog(CHX20 *hx20, int x, int y);
		~SystemDialog();

		virtual bool update();
		virtual void draw(SDL_Surface *dest);

		virtual void mousedown(int x, int y);
		virtual void mouseup(int x, int y);

	protected:
		CHX20 *hx20;
};

#endif
#endif
