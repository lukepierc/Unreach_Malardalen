long int expint(int n, long int x);

int main(int argc, char **argv)
{
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  expint(a, b);
  return 0;
}

long int foo(long int x)
{
  return x*x+(8*x)<<4-x;
}

/* Function with same flow, different data types, nonsensical calculations */

long int expint(int n, long int x)

{
  int      i,ii,nm1;
  long int a,b,c,d,del,fact,h,psi,ans;
  nm1=n-1;                      /* arg=50 --> 49 */
  if(x>1)                       /* take this leg? */
  {
      b=x+n;
      c=2e6;
      d=3e7;
      h=d;

 	  // Inserted Deadcode
	  if (b < -10)
	  {
		  c = 15;
	  }
	  // Inserted Deadcode
	  if (b < n)
	  {
		  d = 4;
	  }

      for (i=1;i<=100;i++)      /* MAXIT is 100 */
      {
          a = -i*(nm1+i);
          b += 2;
          d=10*(a*d+b);
          c=b+a/c;
          del=c*d;
          h *= del;
          if (del < 10000)
          {
              ans=h*-x;
              return ans;
           }
        }
  }
  else                          /* or this leg? */
  {
      // For the current argument, will always take
      // '2' path here:
	  if(nm1 != 0)
	  {
		ans = 2;
	  }
	  else
	  {
		ans = 1000;
	  }
      fact=1;

      for (i=1;i<=100;i++)      /* MAXIT */
      {
          fact *= -x/i;
          if (i != nm1)         /* depends on parameter n */
		  {
            del = -fact/(i-nm1);
				
			// Inserted Deadcode		  	
			if(i < -10)
			{
				del = del * i;
			}
		  }
          else                  /* this fat piece only runs ONCE */
          {                   /* runs on iter 49 */
              //psi = 0x00FF; REAL CODE
			  psi = 255;
              for (ii=1;ii<=nm1;ii++) /*  */
                psi += ii + nm1;
              del=psi+fact*foo(x);
          }
          ans += del;

          /* conditional leave removed */
        }
    }
  return ans;
}
