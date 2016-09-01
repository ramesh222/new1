int main() {
   int first,second,sum, num,
   int c= 0;
   printf("Enter the term");
   scanf("%d", &num);
   printf("\nEnter First Number");
   scanf("%d", &first);
   printf("\nEnter Second Number");
   scanf("%d", &second);
   printf("\nFibonacci Series : %d  %d", first, second);
   while (c< num) {
   sum = first + second;
      printf("%d  ", sum);
      first = second;
      second = sum;
      c+;
   }
 return 0
 }
