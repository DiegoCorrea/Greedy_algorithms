# include <stdio.h>
# define MAX 100
# define start 0
# define finish 1

int activity[2][MAX], n, result[MAX];

void input();
void output();

void recursiveActivitySelector(int,int);

int main(){

  input();

  recursiveActivitySelector(0,n+1);

  output();

  printf("\n");
  return 0;
}

void input(){
  int i;

  activity[start][0] = 0;
  activity[finish][0] = 0;
  result[0] = 0;

  scanf("%d", &n);

  for(i = 1; i <= n ;i++){
    scanf("%d ", &activity[start][i]);
  }

  for(i = 1; i <= n ;i++){
    scanf("%d ", &activity[finish][i]);
    result[i] = 0;
  }
}
void output(){
  int i;

  printf("\nOutput: ");
  for(i = 0; i <= n ;i++){
    if(result[i] == 1){
      printf("\nActivity %d: Start: %d Finish %d | Selected", i, activity[start][i], activity[finish][i]);
    } else{
      printf("\nActivity %d: Start: %d Finish %d | Not Selected", i, activity[start][i], activity[finish][i]);
    }
  }
}

void recursiveActivitySelector(int pivot, int end){
  int m = pivot + 1;

  while((m < end) && (activity[start][m] < activity[finish][pivot]))
    m++;

  if(m < end){
    recursiveActivitySelector(m,end);
    result[m] = 1;
  }else return;
}