int main(void)
{
  // char format[] = "Christian";

  char alpha;
  alpha = 'a';
  char name[] = "by birth";
  int year, binary, unsign;
  year = binary = unsign = 0;
  unsigned int len, len1;
  puts("built-in printf\n");
  len = printf("I am %c Christain %s, and I believe in God 100%%. This year is %d and the binary is %b, the unsigned decimal is %u\n", alpha, name, year, binary, unsign);
  printf("%d\n\n", len);
  
  puts("my _printf");
  len1 = _printf("I am %c Christain %s, and I believe in God 100%%. This year is %d and the binary is %b, the unsigned decimal is %u\n", alpha, name, year, binary, unsign);
  _printf("%d\n", len1);

  return (0);
}
