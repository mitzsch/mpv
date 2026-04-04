#ifndef WAYLAND_CONFIGURE_CB_H
#define WAYLAND_CONFIGURE_CB_H

#include <stdbool.h>

/* Global configure callback — set by the host application (cef-mpv).
 * Called from mpv's VO thread during handle_toplevel_config. */
extern void (*mpv_wl_configure_cb)(void *data, int width, int height, bool fullscreen);
extern void *mpv_wl_configure_cb_data;

#endif
