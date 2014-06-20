#include "../../SDL_internal.h"

#if SDL_VIDEO_DRIVER_EMSCRIPTEN

#include <emscripten/emscripten.h>

#include "SDL_emscriptenvideo.h"
#include "SDL.h"

int Emscripten_ShowMessageBox(const SDL_MessageBoxData *messageboxdata, int *buttonid) {
    return 0;
}

#endif
