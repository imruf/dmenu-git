/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:pixelsize=16:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#ff5874", "#092236" },
	[SchemeSel] = { "#092236", "#ff5874" },
	[SchemeMid] = { "#092236", "#ecc48d" },
	[SchemeSelHighlight] = { "#ecc48d", "#092236" },
	[SchemeNormHighlight] = { "#ff5874", "#2c3043" },
	[SchemeOut] = { "#092236", "#ecc48d" },
	[SchemeMid] = { "#c3ccdc", "#092236" },
	[SchemeOutHighlight] = { "#092236", "#ff5874" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
