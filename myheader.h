
 int sum(int x,int y)
      {
            int z;
            z=x+y;
            printf("Addtion : %d\n",z);
            return z;
      }
      int sub(int x,int y)
      {
            int z;
            z=x-y;
            printf("Difference : %d\n",z);
            return z;
      }
  int  mult(int x,int y)
     {
            int z;
            z=x*y;
            printf("Multiply : %d\n",z);
            return z;
      }
   int div(int x,int y)
     {
            int z;
            z=x/y;
            printf("Div : %d\n",z);
            return z;
      }
      int power(int x,int y)
     {
            int i,z=1;

            for(i=1;i<=y;i++)
            {
                z=z*x;
            }
            printf("a^b: %d\n",z);
            return z;
      }
