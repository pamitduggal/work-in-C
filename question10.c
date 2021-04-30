#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *thread(void *arg){
  printf("In the Thread.\n\n\n\n");
  (void) arg;
  pthread_exit(NULL);
}
int main(void){
  pthread_t threads[6];
  printf("Before Creating Thread.\n\n\n\n");

  for(int i = 0; i < 6; i++)
  {
    if (pthread_create(&threads[i], NULL, thread, (void *)i))
    {
      printf("Error Cant Create thread\n\n\n\\n");
      exit(1);
    }
  }
  printf("After Creating thread.\n\n\n\n");
  return EXIT_SUCCESS;
}
