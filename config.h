#define CMDLENGTH 65
#define DELIMITER "  "

typedef struct {
	char* command;
	unsigned int interval;
	unsigned int signal;
	bool graph;
	char output[CMDLENGTH];
	int pipe[2];
} Block;

static Block blocks[] = {
	{"sb-connection", 10, 0},
	{"sb-weather", 3600, 18},
	{"sb-graph-cpu", 2, 17, 1},
	{"sb-graph-mem", 2, 16, 1},
	{"sb-gpu-mode", 0, 15},
	{"sb-jupyter", 5, 19},
	{"sb-brightness", 0, 14},
	{"sb-volume", 0, 12},
	{"sb-battery", 5, 11},
	{"sb-datetime", 1, 10},
};

