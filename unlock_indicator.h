#ifndef _UNLOCK_INDICATOR_H
#define _UNLOCK_INDICATOR_H

typedef enum {
    STATE_STARTED = 0,          /* default state */
    STATE_KEY_PRESSED = 1,      /* key was pressed, show unlock indicator */
    STATE_KEY_ACTIVE = 2,       /* a key was pressed recently, highlight part
                                   of the unlock indicator. */
    STATE_BACKSPACE_ACTIVE = 3  /* backspace was pressed recently, highlight
                                   part of the unlock indicator in red. */
} unlock_state_t;

typedef enum {
    STATE_PAM_IDLE = 0,         /* no PAM interaction at the moment */
    STATE_PAM_VERIFY = 1,       /* currently verifying the password via PAM */
    STATE_PAM_WRONG = 2         /* the password was wrong */
} pam_state_t;

typedef enum {
	DRAWMODE_CENTER,			/* just draw the image as it is centered on each screen */
	DRAWMODE_TILE,				/* tile the image to fill the screen(s) */
	DRAWMODE_ZOOM,				/* zoom the image to fill the screen(s) (preserving the aspect ratio) */
	DRAWMODE_FIT				/* zoom the image to fit the screen(s) (preserving the aspect ratio) */
} drawmode_t;

xcb_pixmap_t draw_image(uint32_t* resolution);
void redraw_screen(void);
void start_clear_indicator_timeout(void);
void stop_clear_indicator_timeout(void);
void prerender_background_images(cairo_surface_t* img);

#endif
