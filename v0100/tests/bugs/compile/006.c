typedef struct { int dummy; } T;
T a, b;

int main(void)
{
  // = doesn't yield lvalue.
  // But our structures are always lvalues.
  // Should not compile.
  (a = b) = a;
  return 0;
}
