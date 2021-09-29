#define CMDLENGTH 65
#define DELIMITER "  "

typedef struct {
	char* command;
	unsigned int interval;
	unsigned int signal;
	bool visible;
	bool graph;
	char output[CMDLENGTH];
	int pipe[2];
} Block;

static Block blocks[] = {
	// CMD					INTERV	SIGNAL	VIS		GRAPH
	{ "sb-connection", 		10, 	0,		1,		0 },
	{ "sb-weather", 		3600, 	19,		1,		0 },
	{ "sb-graph-cpu", 		2, 		18, 	1,		1 },
	{ "sb-graph-mem", 		2, 		17, 	1,		1 },
	{ "sb-gpu-mode", 		0, 		16,		0,		0 },
	{ "sb-jupyter", 		5, 		15,		0,		0 },
	{ "sb-brightness", 		0, 		14,		1,		0 },
	{ "sb-volume", 			0, 		13,		1,		0 },
	{ "sb-battery", 		5, 		12,		1,		0 },
	{ "sb-datetime", 		1, 		11,		1,		0 },
};

