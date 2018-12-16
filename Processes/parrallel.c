#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h> //added include

char* input[] = ["ls","df","ps", "pwd"];
//deleted unessacary char
int main(int argc, char const *argv[]) {
  int i = 0;
  while(i < 4){ //added while
    pid_t pid = fork();
    if(pid == 0){
      char* args[2] = {input[i], 0}; //added args
      execvp(args[0], args); // changed from execvp(input[0], input)

      printf("fail");
    }
    else{
      wait(0); //added else with wait
    }
    i++;
  }
  printf("done");
  return 0;
}
