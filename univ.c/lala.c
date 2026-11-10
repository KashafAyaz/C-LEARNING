#include <stdio.h>
int isRightTriangle( int a, int b, int c );
int main( void )
{ int a, b, c;
 printf( "Enter three nonzero integers (Ctrl+Z then Enter on Windows, Ctrl+D on Linux/Mac to stop):\n" );
 while ( scanf( "%d %d %d", &a, &b, &c ) == 3 )
   {
      if ( isRightTriangle( a, b, c ) )
         printf( "%d, %d, %d ARE the sides of a right-angled triangle.\n", a, b, c );
      else
         printf( "%d, %d, %d are NOT the sides of a right-angled triangle.\n", a, b, c );
   }
return 0;
}
int isRightTriangle( int a, int b, int c )
{long long x = a, y = b, z = c;
 if ( a <= 0 || b <= 0 || c <= 0 )
      return 0;
if ( x * x + y * y == z * z ||
        x * x + z * z == y * y ||
        y * y + z * z == x * x )
      return 1;
return 0;
}