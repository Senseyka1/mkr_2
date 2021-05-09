#include <stdio.h>

// Функція яка отримує число n від користувача
int get_n_number() {
  int n = 0;
  while (n <= 0) {
    printf("\nВведіть число n: ");
    scanf("%d", &n);
  }
  return n;
}

// Функція яка отримує масив чисел від користувача
void get_numbers(float * numbers, int n) {
  printf("\nВведіть %d дійсних чисел:\n", n);
  for (int i=0; i<n; i++) {
    printf("Введіть %d елемент: ", i+1);
    scanf("%f", &numbers[i]);
  }
}

// Функція яка виводить масив
void print_numbers(float *numbers, int n) {
  printf("(");
  for (int i=0; i<n; i++) {
    if (i == n-1) {
      printf("%.2f", numbers[i]);
    }
    else {
      printf("%.2f, ", numbers[i]);
    }
  }
  printf(")");
}

// Функція яка обчислює суму непарних елментів масиву
float odd_sum(float *numbers, int n) {
  float sum = 0;
  printf("\nМасив створений за допомогою непарних елементів:\n");
  printf("(");
  for (int i=0; i<n; i++) {
    if ((int)numbers[i] % 2 != 0) {
      printf("%.2f ", numbers[i]);
      sum += numbers[i];
    }
    if (i == n-1) {
      printf(")");
    }
  }
  return sum;

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
      float numbers[n];
      get_numbers(numbers, n);

      // Виводимо створнеий масив
      printf("\n*******************************************");
      printf("\nМасив створений за допомогою заданих чисел:\n");
      print_numbers(numbers, n);

      // Виводимо суму непарних елементів масиву
      printf("\n\n*******************************************");
      float sum = odd_sum(numbers, n);
      printf("\n\nСума непарних елементів масиву: %.2f", sum);

    }
    // Кінець роботи програми
    else {
      break;
    }
  }

  return 0;
}
