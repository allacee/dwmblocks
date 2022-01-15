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
	{ "sb-ip-address", 		0,		20,		0,		0 },
	{ "sb-connection", 		10, 	20,		1,		0 },
	{ "sb-weather", 		3600, 	19,		1,		0 },
	{ "sb-graph-cpu", 		2, 		18, 	1,		1 },
	{ "sb-graph-mem", 		2, 		17, 	1,		1 },
	{ "sb-brightness", 		10,		16,		1,		0 },
	{ "sb-volume", 			10,		15,		1,		0 },
	{ "sb-battery", 		5, 		14,		1,		0 },
	{ "sb-cp-webcam", 		5, 		0,		0,		0 },
	{ "sb-cp-jupyter", 		5, 		13,		0,		0 },
	{ "sb-cp-gpu", 			0, 		12,		0,		0 },
	{ "sb-datetime", 		1, 		11,		1,		0 },
};

