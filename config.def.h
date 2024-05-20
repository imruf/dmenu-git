/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:pixelsize=16:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#98971a", "#1d2021" },
	[SchemeSel] = { "#1d2021", "#98971a" },
	[SchemeMid] = { "#1d2021", "#458588" },
	[SchemeSelHighlight] = { "#458588", "#1d2021" },
	[SchemeNormHighlight] = { "#98971a", "#2c3043" },
	[SchemeOut] = { "#1d2021", "#458588" },
	[SchemeMid] = { "#ebdbb2", "#1d2021" },
	[SchemeOutHighlight] = { "#1d2021", "#98971a" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
