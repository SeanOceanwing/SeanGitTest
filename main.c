#include <stdio.h>

void T1011() {
  printf("T1011 is coding ... \n");
  printf("T1011 is testing ... \n");
}

void T1012() {
  printf("T1012 is coding ... \n");
  printf("T1012 is testing ... \n");
  printf("T1012 is fix bug ... \n");
  printf("T1012 is test pass ... \n");
}

int main() {
  char msg[] = "------------Eufy Home---------";
  printf("%s \n\n", msg);

  T1011();
  T1012();

  return 0;

}
