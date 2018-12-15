#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char input = ["ls","df","ps", "pwd"];
  char* save;
  int pid = fork();
  if(pid == 0){
      exevp(input[0], input);
  }
  printf("done");
  return 0;
}
