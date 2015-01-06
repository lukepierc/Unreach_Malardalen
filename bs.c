main()
{
	binary_search(8);
}

int binary_search(int x)
{
  int key[15] = {1, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
  int value[15] = {100, 200, 300, 700, 900, 250, 400, 600, 800, 1500, 1200, 110, 140, 133, 10};
  int fvalue, mid, up, low ;
  
  // Inserted Vars
  double y;
  //scanf("%f", &y);

  low = 0;
  up = 14;
  fvalue = -1;
  // Inserted Conditional
  if( x < -2)
  {
	 // Inserted Conditional
     if( y > 4)
	 {
		  while (low <= up)
		  {
				mid = (low + up) >> 1;
				if ( key[mid] == x )
				{
					  up = low - 1;
					  fvalue = value[mid];
				}
				else
				{
					  // Changed to unreachable
					  if ( key[mid] > x )
					  {
						  up = mid - 1;
					  }
					  else
					  {
						  low = mid + 1;
					  }
				}
				// Inserted Code
				double z = x + y;

				// Unreachable Code
				if(z < x)
				{
					y = x;
				}

				// Unreachable Code
				if(z > y)
				{				
					x = y;
				}
		}
	 }
  }
  return fvalue;
}
