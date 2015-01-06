int complex(int a, int b)
{
  int c;
  // scanf("%d", c);
  while(a < 30)
  {
    while(b < a)
	{ 
		  if(b > 5)
			b = b * 3;
		  else
			b = b + 2;
		  if(b >= 10)
          {
            if(b <= 12)
            {
			    a = a + 10;
            }        
          }	
    	  else
			a = a + 1;
		
		// Inserted Deadcode		
		if(c < -1)
		{
			if(a > 1)
			{
				int d;
				d = a - c;
				// Reachable
				if(d < c)
				{
					// Unreachable
					b = 15 * c;
				}
			}
		}
		 
	}
    a = a + 2;
    b = b - 10;
  }
  return 1;
}

int main(int argc, char **argv)
{   
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  complex(a, b);
  return 0;
}



