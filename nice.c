#include "types.h"
#include "user.h"

#define DEF_P 20

int main(int argc, char *argv[]){
    int
        n   = DEF_P,
        pid = 0;

    if (argc < 2) return -1;

    pid = atoi( argv[1] );

    if (argc > 2) n = atoi( argv[2] );

    set_priority(pid, n);

    return 0;
}
