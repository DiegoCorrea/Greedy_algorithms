# include <stdio.h>
# define MAX 100

int activity[2][MAX], n, result[MAX];

void input();
void output();

int main(){

  input();

  

  output();

  printf("\n");
  return 0;
}

void input(){
  int i;

  activity[0][0] = 0;
  activity[1][0] = 0;
  result[0] = 0;

  printf("Length: ");
  scanf("%d", &n);
  printf("%d", n);

  printf("\nStart: ");
  printf("%d ", activity[0][0]);
  for(i = 1; i <= n ;i++){
    scanf("%d ", &activity[0][i]);
    printf("%d ", activity[0][i]);
  }

  printf("\nFinish: ");
  printf("%d ", activity[1][0]);
  for(i = 1; i <= n ;i++){
    scanf("%d ", &activity[1][i]);
    printf("%d ", activity[1][i]);
    result[i] = 0;
  }
}
void output(){
  int i;

  printf("\nOutput");

  printf("\nActivity Selected: ");
  for(i = 0; i <= n ;i++){
    printf("%d ", result[i]);
  }
}