void print(char*);

int main() {
   char s[100];
   gets(s);
   print(s);
   return 0;
}

void print(char *t) {
   if (*t == '\0')
      return;
   printf("%c", *t);
   print(++t);
}
