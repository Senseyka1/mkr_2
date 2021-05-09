#include <stdio.h>
#include <math.h>

// Функція яка отримує число n від користувача
int get_n_number() {
  int n = 0;
  while (n <= 0) {
    printf("\nВведіть число n: ");
    scanf("%d", &n);
  }
  return n;
}

// Функція яка створює масив
void create_array(int n, float arr[n][n]) {
  for (int i=1; i<=n; i++) {
    for (int j=1; j<=n; j++) {
      arr[i][j] = cos(pow(i,2) + n);
    }
  }
}

// Функція яка вивидить масив
void print_array(int n, float arr[n][n]) {
  printf("\nУтворена матриця:");
  for (int i=1; i<=n; i++) {
    printf("\n|");
    for (int j=1; j<=n; j++) {
      printf("%.3f ", arr[i][j]);
    }
    printf("|");
  }
}

// Функція яка підраховує кількість від'ємних та додатніх елементів масиву
void count_pos_neg(int n, float arr[n][n]) {
  int positive = 0;
  int negative = 0;
  for (int i=1; i<=n; i++) {
    for (int j=1; j<=n; j++) {
      if (arr[i][j] < 0) {
        negative++;
      }
      else if (arr[i][j] > 0) {
        positive++;
      }
    }
  }
  printf("\nКількість додатніх елементів: %d", positive);
  printf("\nКількість від'ємних елементів: %d", negative);
}

// Основна функція програми
int main() {
  int m, var = 0;

  printf("*******************************************\n");
  printf("Запустити програму - 1\n");
  printf("Вийти з програми - 2\n");
  printf("*******************************************\n");

  while(1) {
    if (var == 0) {
      printf("\nВвести: ");
      scanf("%d", &m);
      var += 1;
    }
    else {
      printf("\n\nВи можете спробувати ще раз - 1 \nВийти з програми - 2\n");
      printf("Ввести: ");
      scanf("%d", &m);
    }
    if (m == 1) {
      // Отримуємо число n та створюємо масив
      int n = get_n_number();
      float arr[n+1][n+1];
      create_array(n, arr);

      // Виводимо створнеий масив
      print_array(n, arr);
      printf("\n\n*******************************************");
      // Виводимо кількість від'ємних та додатніх елементів масиву
      count_pos_neg(n, arr);
      printf("\n*******************************************");

    }
    // Кінець роботи програми
    else {
      break;
    }
  }

  return 0;
}
