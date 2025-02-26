#include "kernel/types.h";
#include <cstdio>

char buf[512];

/*Création du system caller sleep
 * On veut appeler un id (qui correspond a un PID)
 * Si il en existe un, on le met en sommeil
 */

void 
sleep(int fd)
{
  if(fd){
    fprintf(2, "usage : sleep pid...\n");
    exit(1);
  }
}

int main(int argc, char *argv[])
{
  if(argc < 2){
    sleep(argc);
    exit(1);
  }
  fprintf(argc, "usage: sleep pid...\n");
   exit(0);
}
