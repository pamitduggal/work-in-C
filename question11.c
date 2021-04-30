#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int sum[8][12];
int total;

void *thread_1(int i){
  int temp;
  for (size_t j = 0; j < 8; j++) {
    temp += sum[j][i];
  }
  printf("The total in row %d is %d\n", i, temp);
  total+=temp;
  pthread_exit(NULL);
}

int main(){

  int delt = 0;
  printf("\n");
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 12; j++) {
      sum[i][j]=delt;
      printf("%d\t", sum[i][j]);
      delt++ ;
    }
    printf("\n");
  }
  printf("\n");

  pthread_t threads[12];
  printf("\tBefore creating threads:\n\n\n\n");
  int testmat;

  for(int i = 0; i < 10; i++)
  {
    if (testmat =(int)pthread_create(&threads[i], NULL, thread_1, (void*)i))
    {
      printf("Error can't create thread\n");
      exit(1);
    }
  }

  for (int i = 0; i < 12; i++)
  {
    pthread_join(threads[i], NULL);
  }
  printf("\nTotal : %d\n", total);
  printf("\nAfter Creating thread.\n\n\n\n");
  return EXIT_SUCCESS;
}
