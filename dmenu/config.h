
/*
  _                                   _                     
 (_)                                 | |                    
  _ _   _  __ _ _ __ ___  _ __   __ _| |__   ___  ___ _ __  
 | | | | |/ _` | '_ ` _ \| '_ \ / _` | '_ \ / _ \/ _ \ '_ \ 
 | | |_| | (_| | | | | | | | | | (_| | |_) |  __/  __/ | | |
 |_|\__, |\__,_|_| |_| |_|_| |_|\__,_|_.__/ \___|\___|_| |_|
     __/ | ##dmenu                                                
    |___/                                                  * /


/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMono Nerd Font:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#e01444", "#222222" },
	[SchemeSel] = { "#eeeeee", "#e01444" },
	[SchemeOut] = { "#000000", "#0356fc" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
