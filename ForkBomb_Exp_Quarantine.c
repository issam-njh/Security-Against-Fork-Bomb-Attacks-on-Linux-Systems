#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void){
void *mem = malloc((1 << 10)*512);
int i, pid;
while(1){
pid = fork();
if(pid == 0){
memset(mem, ’d’, (1 << 10)*512);
}
usleep(1 * 1000);
}
}