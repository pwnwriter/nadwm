//run command program to include custom commands in slstatus by Nabeen0x01
#include <stdio.h>
#include <string.h>
#include "../util.h"

const char *
run_command(const char *cmd)
{
	char *p;
	FILE *fp;

	if (!(fp = popen(cmd, "r"))) {
		warn("popen '%s':", cmd);
		return NULL;
	}
	p = fgets(buf, sizeof(buf) - 1, fp);
	if (pclose(fp) < 0) {
		warn("pclose '%s':", cmd);
		return NULL;
	}
	if (!p) {
		return NULL;
	}
	if ((p = strrchr(buf, '\n'))) {
		p[0] = '\0';
	}

	return buf[0] ? buf : NULL;
}
