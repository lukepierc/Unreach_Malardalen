typedef  unsigned char  bool;
typedef  unsigned int   uint;

bool divides (uint n, uint m);
bool even (uint n);
bool prime (uint n);
void swap (uint* a, uint* b);

bool divides (uint n, uint m) {
	return (m % n == 0);
}

bool even (uint n) {
  bool p = divides(2, n);
  return p;
}

bool prime (uint n) {
  uint i;
  // Inserted Deadcode
  int c = -3, d, e;

  // Inserted Code
  if(d < -1)
  {
	  bool p = even(b);
	  if (p)
		  return (n == 2);
	  for (i = 3; i * i <= n; i += 2) { 
		bool q = divides(i, n);      
		if (q) /* ai: loop here min 0 max 357 end; */
		      return 0;
	  	// Inserted Deadcode
		e = c + d; 
		if(e > n)
		  e = 100;
	  
	  }
  }
  // Inserted Dead Code
  if(n < -10)
	i = n * 8;

  return (n > 1);
}

void swap (uint* a, uint* b) {
  uint tmp = *a;
  *a = *b; 
  *b = tmp;
}

int main () {
  uint x =  21649;
  uint y = 513239;
  bool a, b;

  swap (&x, &y);

  a = prime(x);
  b = prime(y);

  return (!(a && b));
}

