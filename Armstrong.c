int main() {
   int num, temp,rem;
   int sum=0;
 printf("Enter number for checking Armstrong : ");
scanf("%d", &num);
 temp = num;
  while (num != 0)
  {
      rem = num % 10;
      sum = sum + (rem * rem * rem);
      num = num / 10;
   }
 
   if (temp == sum)
      printf("%d is Amstrong Number", temp);
   else
      printf("%d is Amstrong Number", temp);
   return (0);
}
