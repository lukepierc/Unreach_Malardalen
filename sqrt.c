float sqrtTest(float val);

float fabsTest(float x)
{
   if (x < 0) {
	   return -x;
   }
   else {
      return x;
   }
}

// Inserted code
int main(int argc, char **argv)
{
	// Inserted Code
	float a = atoi(argv[1]);
	sqrtTest(a);
	return 0;
}

float sqrtTest(float val)
{
	// Inserted Code
	int y = 6;
	int z = 7;
	int u, v;

   float x = val/10;

   float dx;
   double temp;
   double diff;
   double min_tol = 0.00001;

   int i, flag;
   flag = 0;
   if (val == 0 ){
      x = 0;
   }
   else {
	  i = 1;
      for (i=1;i<20;i++)
      {
         if (!flag) {
            dx = (val - (x*x)) / (2.0 * x);
            x = x + dx;
            diff = val - (x*x);
            temp = fabsTest(diff);
            if (temp <= min_tol){
               flag = 1;
			   // Inserted Code	   
				if(val > 1)
				{
				   u = x + y;
				   v = u + z;
				   // Dead Code
				   if(x > u)
				   {
 						z = -1;
				   }
				}
				
			}
         }
      }
   }
   return (x);
}

