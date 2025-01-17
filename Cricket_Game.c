#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
start:
  srand(time(0));
  int toss = rand() % 2;
  int toss_choice, computer, you, score = 0;

  printf("press 0 for tails and 1 for heads");
  scanf("%d", &toss_choice);
  if (toss == toss_choice)
  {
    printf("you won the toss\nAnd chose for batting\n");
  }
  else
  {
    printf("computer won the toss\nAnd chose for balling\n");
  }

  do
  {
    computer = (rand() % 7);
    printf("Enter your  choice of runs: ");
    // Runs should be from 0 to 6
    scanf("%d", &you);
    printf("computer : %d\n", computer);
    if (you == computer)
    {
      printf("You are out!!!\n");
      goto out;
    }

    if (you > 6 || you < 0)
    {
      printf("Invalid choice\n");
      goto out;
    }
    score = score + you;
   
  } while (you != computer);
out:
  printf("You scored %d\nThank You\n", score);
  printf("Let's play another time\n");
  goto start;
  return 0;
}